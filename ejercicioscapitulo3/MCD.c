/* fichero MCD.c */
/* Este programa calcula el MCD dados 2 números*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long a, b; 
    long long a_calc, b_calc; 
    int valor_leido; 
    long long temporal;
    printf("Introduzca valor de a (entero no negativo): ");
    valor_leido = scanf("%lld", &a);
    if (valor_leido != 1 || a < 0) {
        printf("Error: El valor de 'a' debe ser un número entero no negativo\n");
        return EXIT_FAILURE;
    }
    printf("Introduzca valor de b (entero no negativo): ");
    valor_leido = scanf("%lld", &b);
    if (valor_leido != 1 || b < 0) {
        printf("Error: El valor de 'b' debe ser un número entero no negativo\n");
        return EXIT_FAILURE;
    }
    a_calc = a; b_calc = b;
    if (a == 0 || b == 0) {
        printf("\n  EL M.C.D de %lld y %lld es: %lld\n", a, b, (a == 0) ? b : a);
        return EXIT_SUCCESS;
    }
    while (a_calc != 0) {
         temporal = a_calc;
         a_calc = b_calc % a_calc;
         b_calc = temporal;
     }     
     printf("\n  EL M.C.D de %lld y %lld es: %lld\n", a, b, b_calc);
     return EXIT_SUCCESS;
}