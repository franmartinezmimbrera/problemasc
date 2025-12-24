/* fichero m2d.c */
#include <stdio.h>
#include <stdlib.h>

/* Ejemplo para crear Matriz 2D Dinámica*/

int main(void) {    
    int M = 3; 
    int N = 4; 
    int **matriz;

    matriz = (int **)malloc(M * sizeof(int *));

    if (matriz == NULL) {
        printf("Error: Falló la asignación de filas.\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < M; i++) {
        matriz[i] = (int *)malloc(N * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error: Falló la asignación de columnas en fila %d.\n", i);
            for (int j = 0; j < i; j++) free(matriz[j]);
            free(matriz);
            return EXIT_FAILURE;
        }
        for (int j = 0; j < N; j++) {
            matriz[i][j] = i * N + j + 1;
        }
    }

    printf("\n Matriz Dinámica %dx%d\n", M, N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++) {
        free(matriz[i]); 
    }

    free(matriz);
    printf("Memoria de la matriz liberada correctamente.\n");

    return EXIT_SUCCESS;
}