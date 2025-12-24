/* fichero sumanumerosnaturales.c */
/* Este programa calcula la suma de los n primeros números naturales con for*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {  

    long long suma = 0; 
    long long numero_n; 
    int valor_leido; 

    printf("Introduzca número de números naturales a sumar (n): ");
    valor_leido = scanf("%lld", &numero_n);
    if (valor_leido != 1) {
        printf("Error: La entrada no es un número entero válido.\n");
        return EXIT_FAILURE;
    }
    if (numero_n < 0) {
        printf("Error: El número de naturales debe ser cero o positivo.\n");
        return EXIT_FAILURE;
    }

    for(long long i = 1; i <= numero_n; i++) {
        suma = suma + i;
    }

    printf( "La suma de los %lld primeros números naturales es: %lld \n", numero_n, suma );

    return EXIT_SUCCESS;
}