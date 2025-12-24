/* fichero bisiesto.c */
/* Este programa dice si un año es bisiesto o no*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int anio;
    int valor_leido;
    
    printf( "\n   Introduzca un año: ");
    valor_leido = scanf( "%d", &anio );

    if (valor_leido != 1) {
        printf("\n   Error: La entrada no es un número entero válido\n");
        return EXIT_FAILURE; 
    }

    if ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) )
        printf( "\n   ES BISIESTO \n" );
    else
        printf( "\n   NO ES BISIESTO \n" );
    
    return EXIT_SUCCESS;
}

