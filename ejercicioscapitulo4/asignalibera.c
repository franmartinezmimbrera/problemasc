/* fichero asignalibera.c */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int N = 5;
    int *vector;

    vector = (int *)malloc(N * sizeof(int));

    if (vector == NULL) {
        printf("Error: No se pudo asignar la memoria.\n");
        return EXIT_FAILURE;
    }

    printf("Vector Dinámico de %d Elementos\n", N);
    for (int i = 0; i < N; i++) {
        vector[i] = i * 10;
        printf("%d ", vector[i]);
    }
    printf("\n");

    free(vector);
    printf("Memoria liberada correctamente.\n");
    return EXIT_SUCCESS;
}