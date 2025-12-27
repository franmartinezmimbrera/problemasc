/* fichero bbinaria.c */
#include <stdio.h>
#include <stdlib.h>
/*Realiza la Búsqueda Binaria en un array ordenado.*/
int busqueda_binaria(const int arr[], int n, int objetivo) {
    int bajo = 0;          
    int alto = n - 1;      
    int medio;

    while (bajo <= alto) {
       
        medio = bajo + (alto - bajo) / 2;

        if (arr[medio] == objetivo) {
            return medio;
        }
        else if (arr[medio] < objetivo) {
            bajo = medio + 1; 
        }
        else { 
            alto = medio - 1;
        }
    }
    return -1;
}

int main(void) {
   
    int datos_ordenados[] = {5, 8, 12, 15, 20, 30, 40}; 
    int n = sizeof(datos_ordenados) / sizeof(datos_ordenados[0]);
    int objetivo1 = 20;
    int objetivo2 = 25;
    int indice;

    printf("Conjunto de datos (Ordenado): {5, 8, 12, 15, 20, 30, 40}\n");

 
    indice = busqueda_binaria(datos_ordenados, n, objetivo1);
    
    if (indice != -1) {
        printf("Resultado para %d: Encontrado en el índice %d.\n", objetivo1, indice);
    } else {
        printf("Resultado para %d: No encontrado.\n", objetivo1);
    }

    indice = busqueda_binaria(datos_ordenados, n, objetivo2);

    if (indice != -1) {
        printf("Resultado para %d: Encontrado en el índice %d.\n", objetivo2, indice);
    } else {
        printf("Resultado para %d: No encontrado.\n", objetivo2);
    }
    return EXIT_SUCCESS;
}