/* fichero mergesort.c */
#include <stdio.h>
#include <stdlib.h> 

/* Función auxiliar para combinar (merge) dos sub-arrays ordenados*/
void merge(int arr[], int inicio, int medio, int fin) {
    int i, j, k;
    int n1 = medio - inicio + 1; 
    int n2 = fin - medio;        
    int total_temp = n1 + n2;
    int *temp_arr = (int *)malloc(total_temp * sizeof(int));

    if (temp_arr == NULL) {
        fprintf(stderr, "Error: Fallo al asignar memoria para el Merge Sort.\n");
        return; 
    }
    for (i = 0; i < n1; i++) {
        temp_arr[i] = arr[inicio + i];
    }
    for (j = 0; j < n2; j++) {
        temp_arr[n1 + j] = arr[medio + 1 + j];
    }
    i = 0;      
    j = n1;     
    k = inicio; 
    while (i < n1 && j < total_temp) {
        if (temp_arr[i] <= temp_arr[j]) {
            arr[k++] = temp_arr[i++];
        } else {
            arr[k++] = temp_arr[j++];
        }
    }
    while (i < n1) {
        arr[k++] = temp_arr[i++];
    }
    while (j < total_temp) {
        arr[k++] = temp_arr[j++];
    }
    free(temp_arr);
}
/* Función Mergesoft*/
void mergeSort(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        mergeSort(arr, inicio, medio);
        mergeSort(arr, medio + 1, fin);
        merge(arr, inicio, medio, fin);
    }
}
int main(void) {
    int datos[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(datos) / sizeof(datos[0]);
    printf("Vector original desordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");
    mergeSort(datos, 0, n - 1);
    printf("\nVector ordenado con MergeSort:\n");
      for (int i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    return 0;
}