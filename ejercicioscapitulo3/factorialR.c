/* fichero factorialR.c */
#include <stdio.h>
#include <stdlib.h>
/*Calcula el factorial de un número entero no negativo de forma recursiva. */
long long factorial_recursivo(int n) {
    if (n <= 1) {
        return 1;
    }
    return (long long)n * factorial_recursivo(n - 1);
}
int main(void) {
    int numero;
    printf("Introduce un número entero no negativo max 20 para precisión: ");
    if (scanf("%d", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return EXIT_FAILURE;
    }
    if (numero < 0) {
        printf("Error: El factorial solo está definido para números no negativos.\n");
        return EXIT_FAILURE;
    }
    if (numero > 20) {
        printf("Advertencia: El factorial de %d es muy grande y probablemente cause un resultado incorrecto por desbordamiento (overflow).\n", numero);
    }
    long long resultado = factorial_recursivo(numero);
    printf("El factorial de %d es: %lld\n", numero, resultado);
    return EXIT_SUCCESS;
}