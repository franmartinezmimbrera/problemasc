/* fichero cambiogrados.c */
/* Este programa cambia grados centígrados por fahrenheit*/

#include <stdio.h>
#include <stdlib.h>
#define FACTOR_C_TO_F (9.0 / 5.0) 

int main(void) {
    double c, f;
    int valor_leido;

    printf("Introduzca valor en grados Centígrados: ");
    valor_leido = scanf("%lf", &c);
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número.\n");
        return EXIT_FAILURE;
    }

    f = (FACTOR_C_TO_F * c) + 32.0;
    
    printf("El resultado en grados Fahrenheit es: %.2lf F\n", f);
    
    return EXIT_SUCCESS;
}