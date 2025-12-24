/* fichero trasposicion.c */
#include <stdio.h>
#include <stdlib.h>
#define R_FILAS 3
#define C_COLUMNAS 4
/* Función para trasponer una matriz*/
void trasponer_matriz(int filas_orig, int cols_orig,int original[filas_orig][cols_orig], int transpuesta[cols_orig][filas_orig]) {
    for (int i = 0; i < filas_orig; i++) {
        for (int j = 0; j < cols_orig; j++) {
            transpuesta[j][i] = original[i][j];
        }
    }
}
void imprimir_matriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d", matriz[i][j]); 
        }
        printf("\n");
    }
}
int main(void) {
    int A[R_FILAS][C_COLUMNAS] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
    int AT[C_COLUMNAS][R_FILAS];
    printf("Matriz Original A (%d x %d) \n", R_FILAS, C_COLUMNAS);
    imprimir_matriz(R_FILAS, C_COLUMNAS, A);
    trasponer_matriz(R_FILAS, C_COLUMNAS, A, AT);
    printf("\nMatriz Transpuesta AT (%d x %d) \n", C_COLUMNAS, R_FILAS);
    imprimir_matriz(C_COLUMNAS, R_FILAS, AT);
    return EXIT_SUCCESS;
}