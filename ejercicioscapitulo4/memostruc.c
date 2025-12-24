/* fichero memostruc.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char nombre[20];
} Tarea;
int main(void) {
    int N_tareas = 10;
    Tarea *lista_tareas;
    lista_tareas = (Tarea *)calloc(N_tareas, sizeof(Tarea)); 
    if (lista_tareas == NULL) return EXIT_FAILURE;
    lista_tareas[0].id = 1;
    strcpy(lista_tareas[0].nombre, "Comprar");
    lista_tareas[1].id = 2;
    strcpy(lista_tareas[1].nombre, "Estudiar");
    lista_tareas[2].id = 3;
    strcpy(lista_tareas[2].nombre, "Correr");
    printf("Lista de Tareas:\n");
    for (int i = 0; i < N_tareas; i++) {
        if (lista_tareas[i].id != 0) {
             printf(" - Tarea %d: %s\n", lista_tareas[i].id, lista_tareas[i].nombre);
        } else {
             printf(" - Tarea %d: <No asignada>\n", i + 1);
        }
    }
    free(lista_tareas);
    printf("Memoria de estructuras liberada correctamente.\n");
    return EXIT_SUCCESS;
}