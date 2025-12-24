/* fichero raizcuadrada.c */
/* Este programa calcula la raíz cuadrada de un número*/

#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

int main(void) {

    double numero, resultado;
    int valor_leido;

    printf("Introduce el número a calcular la raíz cuadrada: ");
    valor_leido = scanf("%lf", &numero); 
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número.\n");
        return EXIT_FAILURE;
    }
    if (numero < 0.0) {
        printf("Error: No se puede calcular la raíz cuadrada n<0.\n");
        return EXIT_FAILURE;
    }

    resultado = sqrt(numero);
    printf("La raíz cuadrada de %.4lf es: %.4lf\n", numero, resultado);
    return EXIT_SUCCESS;
}