/* fichero pulgadasmilimetros.c */
/* Este programa cambia pulgadas por milímetros*/
#include <stdio.h>
#include <stdlib.h>
#define FACTOR_CONVERSION 25.4 

int main(void) {
  
    double pul, mil;
    int valor_leido;

    printf("Introduzca valor en pulgadas: ");
    valor_leido = scanf("%lf", &pul);
    
    if (valor_leido != 1 || pul < 0.0) {
        printf("Error: La entrada debe ser un número positivo o cero.\n");
        return EXIT_FAILURE;
    }

    mil = FACTOR_CONVERSION * pul;
    printf("El resultado en milímetros es: %.2lf mm\n", mil);
    
    return EXIT_SUCCESS;
}