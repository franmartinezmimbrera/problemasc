/* fichero binomiosuma.c */
/* Este programa calcula el binomio de suma de a+b al cuadrado*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {   
    double a, b, resultado; int valor_leido;
    printf("Introduce el valor de a: ");
    valor_leido = scanf("%lf", &a); 
    if (valor_leido != 1) {
        printf("Error: La entrada para 'a' debe ser un número.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce el valor de b: ");
    valor_leido = scanf("%lf", &b);
    if (valor_leido != 1) {
        printf("Error: La entrada para 'b' debe ser un número.\n");
        return EXIT_FAILURE;
    }
    resultado = (a * a) + (b * b) + (2.0 * a * b);    
    printf("El resultado del binomio de suma de (a+b)^2 es: %.4lf\n", resultado);
    return EXIT_SUCCESS;
}