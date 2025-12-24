/* fichero binterpola.c */
#include <stdio.h>
#include <stdlib.h>
/*Realiza la Búsqueda por Interpolación en un array ordenado uniformemente distribuido*/
int busqueda_interpolacion(const int arr[], int n, int objetivo) {
    int bajo = 0;           
    int alto = n - 1;       
    int pos;                
    while (bajo <= alto && objetivo >= arr[bajo] && objetivo <= arr[alto]) {
        if (bajo == alto) {
            if (arr[bajo] == objetivo) {
                return bajo;
            }
            return -1;
        }
        if (arr[alto] == arr[bajo]) {
               if (arr[bajo] == objetivo)
                    return bajo;
               else
                    return -1;
}
        pos = bajo + (((double)(alto - bajo) / (arr[alto] - arr[bajo])) * (objetivo - arr[bajo]));
        if (arr[pos] == objetivo) {
            return pos;
        }
        if (arr[pos] < objetivo) {
            bajo = pos + 1;
        }
        else {
            alto = pos - 1;
        }
    }
    return -1;
}
int main(void) {
  
    int datos_ordenados[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
    int n = sizeof(datos_ordenados) / sizeof(datos_ordenados[0]);
    int objetivo1 = 70;
    int indice;

    printf("Conjunto de datos (Ordenado): {10, 20, 30, ..., 100}\n");
    indice = busqueda_interpolacion(datos_ordenados, n, objetivo1);
    if (indice != -1) {
        printf("Resultado para %d: Encontrado en el índice %d.\n", objetivo1, indice);
    } else {
        printf("Resultado para %d: No encontrado.\n", objetivo1);
    }
    return EXIT_SUCCESS;
}