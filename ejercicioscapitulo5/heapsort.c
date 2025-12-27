/* fichero heapsort.c */
#include <stdio.h>
#include <stdlib.h>

/* Función de intercambio (swap)*/
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
/*Función Heapify: restaura la propiedad de Max-Heap en un subárbol
con raíz en 'i' dentro de un array de tamaño 'n'*/
void heapify(int arr[], int n, int i) {
  
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
/* Función principal de Heapsort */
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main(void) {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    heapSort(arr, n);

    printf("Array ordenado con Heapsort: \n");
     for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
  
}