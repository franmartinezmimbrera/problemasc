/* fichero blineal.c */
#include <stdio.h>
#include <stdlib.h>
/*Realiza la Búsqueda Lineal en un array.*/
int busqueda_lineal(const int arr[], int n, int objetivo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == objetivo) {return i; }
    }
    return -1; 
}
int main(void) {
    int datos[] = {10, 5, 20, 15, 8, 30};
    int n = sizeof(datos) / sizeof(datos[0]);
    int indice, objetivo1 = 15;
    printf("Conjunto de datos: {10, 5, 20, 15, 8, 30}\n");
    indice = busqueda_lineal(datos, n, objetivo1);
    if (indice != -1) {
        printf("Resultado para %d: Encontrado en el índice %d.\n", objetivo1, indice);
    } else {
        printf("Resultado para %d: No encontrado.\n", objetivo1);
    }
    return EXIT_SUCCESS;
}