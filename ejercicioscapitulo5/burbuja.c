/* fichero burbuja.c */
#include <stdio.h>
#include <stdlib.h>
/*Función que implementa el algoritmo de ordenación de burbuja*/
void ordenar_burbuja(int arr[], int n) {
    int i, j;int temp; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {            
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void) {
    int numeros[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    printf("\nConjunto original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    ordenar_burbuja(numeros, n);
    printf("Conjunto ordenado (Bubble Sort): ");
     for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    return EXIT_SUCCESS;
}