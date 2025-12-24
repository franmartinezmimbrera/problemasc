/* fichero raizenesima.c */
/* Este programa calcula la raíz n-ésima de un número entero */
#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
int main(void) {
    double numero, resultado;
    int exponente,valor_leido;
    printf("Introduce el número a calcular la raíz: ");
    valor_leido = scanf("%lf", &numero); 
    if (valor_leido != 1) {
        printf("Error: La entrada para el número debe ser numérica\n");
        return EXIT_FAILURE;
    }
    printf("Introduce exponente de raíz (n entero y != 0): ");
    valor_leido = scanf("%d", &exponente); 
    if (valor_leido != 1 || exponente == 0) {
        printf("Error: El exponente debe ser un número entero !=0 \n");
        return EXIT_FAILURE;
    }
    if (numero < 0.0 && abs(exponente) % 2 == 0) {
        printf("Error: Imposible cálculo para de un número <0 en R\n");
        return EXIT_FAILURE;
    }
    resultado = pow(fabs(numero), 1.0 / exponente); 
    if (numero < 0.0 && abs(exponente) % 2 != 0) {
        resultado = -resultado;
    }
    printf("La raíz %d de %.4lf es: %.4lf\n", exponente, numero, resultado); 
    return EXIT_SUCCESS;
}