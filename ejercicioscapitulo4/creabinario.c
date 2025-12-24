/* fichero creabinario.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* Definición de la estructura Registro Alumno a guardar*/
typedef struct {
    int id;
    char nombre[50];
    float nota;
} RegistroAlumno;

const char *NOMBRE_ARCHIVO = "registro.dat"; 

/* Procedimiento que crea un fichero binario con un registro*/
void crear_binario() {
    
    RegistroAlumno alumno_original = {
        .id = 101, 
        .nombre = "Sofia Perez", 
        .nota = 9.5
    }; 
    FILE *archivo = NULL;
    archivo = fopen(NOMBRE_ARCHIVO, "wb"); 
    
    if (archivo == NULL) {
        perror("Error al escribir el archivo binario");
        return; 
    }
    if (fwrite(&alumno_original, sizeof(RegistroAlumno), 1, archivo) != 1) {
        perror("Error al escribir el registro en el archivo");
    }
    
    fclose(archivo);
}

/* Procedimiento que lee de un fichero binario el primer registro*/
void leer_binario() {
    
    RegistroAlumno alumno_leido = {0};
    FILE *archivo = NULL;
    
    archivo = fopen(NOMBRE_ARCHIVO, "rb"); 
    
    if (archivo == NULL) {
        perror("Error al leer el archivo binario");
        return; 
    }
    if (fread(&alumno_leido, sizeof(RegistroAlumno), 1, archivo) == 1) {
        printf("Datos cargados del archivo: ID=%d, Nombre=%s, Nota=%.2f\n", 
               alumno_leido.id, alumno_leido.nombre, alumno_leido.nota);
    } else {
        perror("Error al leer el registro del archivo");
    }

    fclose(archivo);
}
int main (void){

    crear_binario();
    leer_binario();
    return EXIT_SUCCESS;
}