/* fichero qsort.c */
#include <stdio.h>
#include <stdlib.h>
/* Función de comparación requerida por qsort para entero int */
int comparar(const void *a, const void *b) {
    int val_a = *(const int *)a;
    int val_b = *(const int long *)b;
    if (val_a < val_b) return -1;  
    if (val_a > val_b) return 1;   
    return EXIT_SUCCESS;                      
}
int main(void) {
    
    int numeros[] = {50, 10, 8, 20, 40};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    printf("Vector antes de qsort: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", numeros[i]); 
    printf("\n");
    qsort(numeros, n, sizeof(int), comparar);               
    printf("Vector después de qsort: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", numeros[i]);
    printf("\n");
    return EXIT_SUCCESS;
}