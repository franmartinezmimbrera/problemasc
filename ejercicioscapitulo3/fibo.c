/* fichero fibo.c */
#include <stdio.h>
#include <stdlib.h>
/* Función iterativa para calcular el n-ésimo número de Fibonacci*/
long long fibonacci_iterativo(int n) {
    long long a = 0; 
    long long b = 1; 
    long long resultado = 0; 
   
    if (n <= 0) {return 0;}
    if (n == 1) {return 1;}
    
    for (int i = 2; i <= n; i++) {
        resultado = a + b; 
        a = b;             
        b = resultado;     
    }
    return resultado;
}
int main(void) {
    int n = 40; 
    printf("El %d-ésimo número de Fibonacci (iterativo) es: %lld\n", n, fibonacci_iterativo(n));
    return EXIT_SUCCESS;
}

