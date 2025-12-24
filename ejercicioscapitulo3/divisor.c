/* fichero divisor.c */
/* Este programa calcula dados 2 números si a es divisor de b */
#include <stdio.h>
#include <stdlib.h>
/* Función para comprobar si 'a' es divisor de 'b'*/
int divisible(long long a, long long b) {

    if (a == 0) {return 0; }
    if ((b % a) == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
int main(void) {

    long long a, b;
    int valor_leido;

    printf("Introduzca valor de a (potencial divisor): ");
    valor_leido = scanf("%lld", &a);
    if (valor_leido != 1) {
        printf("Error: La entrada para 'a' no es un número entero.\n");
        return EXIT_FAILURE;
    }
    printf("Introduzca valor de b (potencial dividendo): ");
    valor_leido = scanf("%lld", &b);    
    if (valor_leido != 1) {
        printf("Error: La entrada para 'b' no es un número entero.\n");
        return EXIT_FAILURE;
    }
    if (divisible(a, b)) {
        printf("%lld es divisor de %lld.\n", a, b);
    } else {
        printf("%lld NO es divisor de %lld.\n", a, b);
    }
 
    return EXIT_SUCCESS;
}