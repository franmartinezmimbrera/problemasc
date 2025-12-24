/* fichero memostruc2.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char nombre[20];
} Tarea;
const char *NOMBRE_ARCHIVO = "registroestructura.dat";
int main(void) {
    int N_tareas = 10, rellenas = 3;
    Tarea *lista_tareas;
    lista_tareas = (Tarea *)calloc(N_tareas, sizeof(Tarea));
    if (lista_tareas == NULL) return EXIT_FAILURE;
    lista_tareas[0].id = 1;
    strcpy(lista_tareas[0].nombre, "Comprar");
    lista_tareas[1].id = 2;
    strcpy(lista_tareas[1].nombre, "Estudiar");
    lista_tareas[2].id = 3;
    strcpy(lista_tareas[2].nombre, "Correr");
    FILE *archivo = fopen(NOMBRE_ARCHIVO, "wb"); 
    if (archivo == NULL) {
        perror("Error al escribir el archivo binario");
        free(lista_tareas);
        return EXIT_FAILURE;
    }
    if (fwrite(lista_tareas, sizeof(Tarea), rellenas, archivo) != rellenas) {
         perror("Error de escritura incompleta");
    }    
    fclose(archivo);
    free(lista_tareas);
    printf("Vector de escritura liberado correctamente.\n");    
    archivo = fopen(NOMBRE_ARCHIVO, "rb"); 
    if (archivo == NULL) {
        perror("Error al leer el archivo binario");
        return EXIT_FAILURE;
    }
    fseek(archivo, 0, SEEK_END);
    long tamano_total = ftell(archivo);
    int num_registros = 0;
    if (tamano_total > 0 && sizeof(Tarea) > 0) {num_registros = (int)(tamano_total / sizeof(Tarea));}
    Tarea *lista_leida = NULL;
    if (num_registros > 0) {
        lista_leida = (Tarea *)malloc(num_registros * sizeof(Tarea));
        if (lista_leida == NULL) {
            printf("Error: Asignación de memoria para la lectura.\n");
            fclose(archivo);
            return EXIT_FAILURE;}
    }
    fseek(archivo, 0, SEEK_SET);     
    printf("\nLista de Tareas leídas(%d registros):\n", num_registros);
    if (num_registros > 0) {
     size_t leidos =fread(lista_leida,sizeof(Tarea),num_registros,archivo);        
        if (leidos != num_registros) {printf("Se esperaban %d registros, solo se leyeron %zu.\n", num_registros, leidos);}
        for (int i = 0; i < leidos; i++) {
             printf(" - Tarea %d: %s\n", lista_leida[i].id, lista_leida[i].nombre);
        }   
        free(lista_leida); 
        printf("Vector de lectura liberado correctamente.\n");
    }
    fclose(archivo);    
    return EXIT_SUCCESS;
}