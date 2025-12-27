/* fichero mascara.c*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/* Invierte (cambia 0 por 1 y 1 por 0) los últimos k bits de un número entero*/
long long invertir_ultimos_k_bits(long long numero, int k) {
    int tamano_ll = sizeof(long long) * CHAR_BIT;     
    if (k <= 0) {
        return numero; 
    }
    if (k >= tamano_ll) {
        return ~numero; 
    }
    long long mascara = (1LL << k); 
    mascara = mascara - 1;
    return numero ^ mascara;
}
int main(void) {
    long long num = 45LL;     
    int k = 4;        
    long long resultado = invertir_ultimos_k_bits(num, k);
    
    printf("Número original: %lld (Binario: ...00101101)\n", num);
    printf("K: %d\n", k);
    printf("Número resultante: %lld\n", resultado);
    
    return EXIT_SUCCESS;
}