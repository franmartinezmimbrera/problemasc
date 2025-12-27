/* fichero sumannumerosnaturales.c */
/* Calcula la suma de los "n" primeros números naturales*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    
    long long n; 
    long long suma; 
    int valor_leido;
    printf("Introduzca número de números naturales a sumar (n): ");
    valor_leido = scanf("%lld", &n);
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número entero >0\n");
        return EXIT_FAILURE; 
    }
    if (n <= 0) {
        printf("Error: El número de naturales a sumar debe ser un entero positivo\n");
        return EXIT_FAILURE;
    }
    suma = n * (n + 1) / 2;
    printf("La suma de los %lld primeros números naturales es: %lld\n", n, suma); 
    return EXIT_SUCCESS;
}