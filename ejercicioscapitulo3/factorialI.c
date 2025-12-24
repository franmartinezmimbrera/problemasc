/* fichero factorialI.c */
#include <stdio.h>
#include <stdlib.h>
/*Calcula el factorial de un numero entero no negativo de forma iterativa*/
long long factorial_iterativo(int n) {
    if (n==0 || n==1) {
        return 1;
    }
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
int main(void) {
    int numero;
    printf("Introduce un numero entero no negativo (max 20 para precision): ");
    if (scanf("%d", &numero) != 1) {
        printf("Error: Entrada no valida.\n");
        return EXIT_FAILURE;
    }
    if (numero < 0) {
        printf("Error: El factorial solo esta definido para numeros no negativos.\n");
        return EXIT_FAILURE;
    }
    if (numero > 20) {
        printf("Advertencia: El factorial de %d es muy grande y probablemente cause un resultado incorrecto por desbordamiento (overflow).\n", numero);
    }
    long long resultado = factorial_iterativo(numero);
    printf("El factorial de %d es: %lld\n", numero, resultado);
    return EXIT_SUCCESS;
}