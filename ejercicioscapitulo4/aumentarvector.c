/* fichero aumentarvector.c */
#include <stdio.h>
#include <stdlib.h>

/* Ejemplo para aumentar un vector en tiempo de ejecución*/

int main(void) {
    
    int N_inicial = 3;
    int N_nuevo = 5;
    int *vector = NULL;
    
    vector = (int *)malloc(N_inicial * sizeof(int));
    if (vector == NULL) return EXIT_FAILURE;

    for (int i = 0; i < N_inicial; i++) {
        vector[i] = i + 10;
    }
    printf("\n Vector Inicial (%d elementos):\n", N_inicial);
        for (int i = 0; i < N_inicial; i++) 
            printf("%d ", vector[i]);
        printf("\n");

    int *temp = (int *)realloc(vector, N_nuevo * sizeof(int));

    if (temp == NULL) {
        printf("Error: Falló realloc, los datos originales siguen en 'vector'.\n");
        free(vector);
        return EXIT_FAILURE;
    }
    vector = temp;
    for (int i = N_inicial; i < N_nuevo; i++) {
        vector[i] = i + 100;
    }
    printf("Vector Redimensionado (%d elementos):\n", N_nuevo);
    for (int i = 0; i < N_nuevo; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    free(vector);
    printf("Memoria liberada correctamente.\n");
    return EXIT_SUCCESS;
}

