/* fichero multiplo3_ampliado.c */
/* Este programa dice si un número es múltiplo de 3 Y también si es par  */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long numero;
    int valor_leido;
    printf( "\n   Introduzca un número entero: " );
    valor_leido = scanf( "%lld", &numero );
    if (valor_leido != 1) {
        printf("\n   Error: La entrada no es un número entero válido.\n");
        return EXIT_FAILURE; 
    }
    if (numero % 3 == 0 && numero % 2 == 0) {
        printf( "\n   El número %lld ES MÚLTIPLO DE 3 Y TAMBIÉN ES PAR (Múltiplo de 6).\n", numero );
    } 
    else if (numero % 3 == 0) {printf( "\n   El número %lld ES MÚLTIPLO DE 3, pero no es par.\n", numero );}
    else {printf( "\n   El número %lld NO ES MÚLTIPLO de 3.\n", numero );}
    return EXIT_SUCCESS;
}