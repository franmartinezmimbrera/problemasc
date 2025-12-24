/* fichero operacionesaritmeticas.c */
/* Este programa realiza operaciones aritméticas dados 2 números*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    double valor1,valor2;int valor_leido;
    printf("Introduce el valor primero: ");
    valor_leido = scanf("%lf", &valor1); 
    if (valor_leido != 1) {
        printf("Error: El primer valor debe ser un número.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce el valor segundo: ");
    valor_leido = scanf("%lf", &valor2);
    if (valor_leido != 1) {
        printf("Error: El segundo valor debe ser un número.\n");
        return EXIT_FAILURE;
    }
    printf("El resultado de la suma de los dos valores es: %.2lf\n", valor1 + valor2);
    printf("El resultado de la resta de los dos valores es: %.2lf\n", valor1 - valor2);
    printf("El resultado de la multiplicación de los dos valores es: %.2lf\n", valor1 * valor2);
    if (valor2 != 0.0) {
        printf("El resultado de la división de los dos valores es: %.2lf\n", valor1 / valor2);
    } else {
        printf("El resultado de la división de los dos valores es: Error (División por cero).\n");
    }
    return EXIT_SUCCESS;
}