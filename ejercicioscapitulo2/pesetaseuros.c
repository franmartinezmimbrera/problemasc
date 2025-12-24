/* fichero pesetaseuros.c */
/* Este programa realiza la conversión de cantidades en pesetas a cantidades en euros*/
#include <stdio.h>
#include <stdlib.h>
#define TASA_CAMBIO 166.386 
int main(void) {
    
    double euros;
    double pesetas;
    int valor_leido; 
      
    printf("Introduzca su valor en pesetas: ");
    valor_leido = scanf("%lf", &pesetas);
    
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número.\n");
        return EXIT_FAILURE;
    }
    if (pesetas < 0.0) { 
        printf("Error: La cantidad de pesetas no puede ser negativa.\n");
        return EXIT_FAILURE;
    }

    euros = pesetas / TASA_CAMBIO;
    printf("Su valor en euros es: %.2lf EUR\n", euros);
    
    return EXIT_SUCCESS;
}