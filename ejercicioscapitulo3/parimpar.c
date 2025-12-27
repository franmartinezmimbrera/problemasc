/* fichero parimpar.c */
/* Este programa dice si un número es par o impar*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long numero;
    int valor_leido; 
    printf( "\n   Introduzca un número entero: " );
    valor_leido = scanf( "%lld", &numero );
    if (valor_leido != 1) {
        printf("\n   Error: La entrada no es un número entero\n");
        return EXIT_FAILURE; 
    }
    if (numero % 2 == 0) {printf( "\n   ES PAR\n" ); } 
    else { printf( "\n   ES IMPAR\n" ); }
    return EXIT_SUCCESS; 
}