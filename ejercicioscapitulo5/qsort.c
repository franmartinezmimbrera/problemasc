/* fichero qsort.c */
#include <stdio.h>
#include <stdlib.h> 
/* Función de Intercambio (Swap) para enteros */
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
/* Función de Partición para enteros */
int particion(int arr[], int bajo, int alto) {
    int pivote = arr[alto]; 
    int i = (bajo - 1); 
    for (int j = bajo; j <= alto - 1; j++) {
        if (arr[j] <= pivote) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[alto]);
    return (i + 1);
}
/* Función Quicksort (Recursiva) para enteros */
void quicksort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto);
        quicksort(arr, bajo, pi - 1);  
        quicksort(arr, pi + 1, alto); 
    }
}
int main(void) {
    int datos[] = {10, 70, 8, 90, 1000, 5};
    int n = sizeof(datos) / sizeof(datos[0]);

    printf("Vector original: ");
      for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");

    quicksort(datos, 0, n - 1);

    printf("Vector ordenado con Quicksort (long long): ");
      for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");

    return EXIT_SUCCESS; 
}