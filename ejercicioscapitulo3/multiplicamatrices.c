/* fichero multiplicamatrices.c */
#include <stdio.h>
#include <stdlib.h>
#define N 3 

/* Esta función Multiplica dos matrices cuadradas estáticas de números enteros A y B (A * B = C) y la devuelve en C. */
void multiplicar_matrices_estaticas(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0; 
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void imprimir_matriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
  
    int A[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[N][N] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[N][N];
    
    multiplicar_matrices_estaticas(A, B, C);
    
    printf("Matriz A (%dx%d):\n", N, N);
    imprimir_matriz(A);

    printf("\nMatriz B (%dx%d):\n", N, N);
    imprimir_matriz(B);

    printf("\nMatriz Resultado C = A * B:\n");
    imprimir_matriz(C); 

    return EXIT_SUCCESS;
}