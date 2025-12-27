/* fichero shellsort.c */
#include <stdio.h>
#include <stdlib.h>
/* Implementación del algoritmo Shellsort usando la eficiente secuencia de Knuth (3*h + 1).*/
void shellsort_knuth(int arr[], int n) {
    int i, j, h, temp;

    h = 1;
    while (h < n / 3) {
        h = 3 * h + 1;
    }
    while (h >= 1) {
        for (i = h; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= h && arr[j - h] > temp; j -= h) {
                arr[j] = arr[j - h];
            }
            arr[j] = temp;
        }
        h = h / 3;
    }
}
int main(void) {

    int datos[] = {90, 8, 70, 6, 50, 4, 30, 2, 10, 0, 85, 15, 65, 35};
    int n = sizeof(datos) / sizeof(datos[0]);

    printf("Array original desordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");

    shellsort_knuth(datos, n);

    printf("\n Array ordenado con Shellsort (Knuth):\n");
     for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");
    
    return EXIT_SUCCESS;
}