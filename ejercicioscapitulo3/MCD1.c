/* fichero MCD1.c */
/* Este programa calcula el MCD dados 2 números mediante una función*/
#include <stdio.h>
#include <stdlib.h>
// La función MCD calcula el Máximo Común Divisor usando el Algoritmo de Euclides.
long long MCD(long long a, long long b) {

    long long temporal;
    if (a == 0) return b;
    if (b == 0) return a;
    while (a != 0) { 
         temporal = a;
         a = b % a;
         b = temporal;
    }        
    return b; 
}
int main(void) {

    long long ax, bx;
    long long resultado_mcd;
    int valor_leido;

    printf("Introduzca valor de a (entero no negativo): ");
    valor_leido = scanf("%lld", &ax);

    if (valor_leido != 1 || ax < 0) {
        printf("Error: El valor de 'a' debe ser un número entero no negativo\n");
        return EXIT_FAILURE;
    }

    printf("Introduzca valor de b (entero no negativo): ");
    valor_leido = scanf("%lld", &bx);

    if (valor_leido != 1 || bx < 0) {
        printf("Error: El valor de 'b' debe ser un número entero no negativo\n");
        return EXIT_FAILURE;
    }

    resultado_mcd = MCD(ax, bx);
    printf("El M.C.D de %lld y %lld es: %lld\n", ax, bx, resultado_mcd);

    return EXIT_SUCCESS;
}
