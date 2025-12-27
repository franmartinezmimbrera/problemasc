/* fichero newton.c*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

long long factorial(int n) {
    if (n == 0 || n == 1) {return 1;}
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {resultado *= i;}
    return resultado;
}
long long nCr(int n, int r) {
    if (r < 0 || r > n) {return 0; }
    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_n_minus_r = factorial(n - r);
    if (fact_n < 0 || fact_r < 0 || fact_n_minus_r < 0) {
        fprintf(stderr, "Error: El factorial (N > 20) es demasiado grande.\n");
        return -1; 
    }
    return fact_n / (fact_r * fact_n_minus_r);
}
/* Binomio de Newton */
void binomio_de_newton(int a, int b, int n) {
    
    if (n < 0) { 
        printf("Error: El exponente N debe ser no negativo.\n");
        return;
    }

    printf("Expansión de (%d + %d)^%d:\n", a, b, n);
    long double suma_total = 0.0L; 
    
    for (int k = 0; k <= n; k++) {
        long long coeficiente = nCr(n, k);
        
        if (coeficiente == -1) {
            printf("Cálculo detenido: N (%d) es > 20 y desborda el factorial.\n", n);
            return; 
        }

        long double potencia_a = powl((long double)a, (long double)(n - k));
        long double potencia_b = powl((long double)b, (long double)k);
        long double valor_termino_ld = (long double)coeficiente * potencia_a * potencia_b;
        suma_total += valor_termino_ld;
        
        printf("  + (%lld * %d^%d * %d^%d) = %llu\n", 
               coeficiente, 
               a, n - k, 
               b, k, 
               (unsigned long long)roundl(valor_termino_ld));
    }
    
    printf("Valor Total (calculado por suma de términos) = %llu\n", (unsigned long long)roundl(suma_total));
    
}

int main(void) {
    int a, b, n;

    printf("Introduce un numero entero para a: ");
    if (scanf("%d", &a) != 1) { 
        printf ("Número no válido.\n");    
        return EXIT_FAILURE; 
    }
    
    printf("Introduce un numero entero para b: ");
    if (scanf("%d", &b) != 1) { 
        printf ("Número no válido.\n");   
        return EXIT_FAILURE; 
    }
    if (a>20 || b>20){
        printf("Error: Ni a ni b pueden ser mayor que 20 porque desborda el long long el factorial\n");
        return EXIT_FAILURE;
    } 
    printf("Introduce un numero entero no negativo para n (MAX 12): ");
    if (scanf("%d", &n) != 1) { 
        printf("Error: N debe ser un número.\n");
        return EXIT_FAILURE;
    }
    if (n>12){
        printf("Error: n no puede ser mayor que 12 porque desborda el long long\n");
        return EXIT_FAILURE;
    }
    binomio_de_newton(a, b, n);
    return EXIT_SUCCESS; 
}