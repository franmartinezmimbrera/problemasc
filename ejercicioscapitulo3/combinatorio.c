/* fichero combinatorio.c */
/*Calcula el número combinatorio C(n, r) o n sobre r.*/
#include <stdio.h>
#include <stdlib.h>
long long factorial(long long n) {
    if (n ==0 || n==1) {return 1;}
    long long resultado = 1;
    for (long long i = 2; i <= n; i++) {resultado *= i;}
    return resultado;
}
long long nCr(long long n, long long r) {
    if (r < 0 || r > n) {return 0; }

    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_n_minus_r = factorial(n - r);
    if (fact_n < 0 || fact_r < 0 || fact_n_minus_r < 0) {
        fprintf(stderr, "Error: El factorial es demasiado grande para 'long long'.\n");
        return -1; 
    }
    return fact_n / (fact_r * fact_n_minus_r);
}
int main(void) {
    long long N;
    long long M;
    printf("Introduce un numero entero no negativo para N: ");
    if (scanf("%lld", &N) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }
    if (N < 0) {
        printf("Error: N debe ser no negativo.\n");
        return 1;
    }
    printf("Introduce un numero entero no negativo para M: ");
    if (scanf("%lld", &M) != 1) {
        printf("Error: Entrada no válida.\n");
        return EXIT_FAILURE;
    }
    if (M < 0) {
        printf("Error: M debe ser no negativo.\n");
        return EXIT_FAILURE;
    }
    long long combinaciones = nCr(N, M);
    if (combinaciones != -1) {
        printf("El número combinatorio de %lld sobre %lld es: %lld\n", N, M, combinaciones); 
    }
    return EXIT_SUCCESS;
}