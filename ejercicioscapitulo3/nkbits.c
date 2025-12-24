/* fichero nkbits.c */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/* Procedimiento que escribe por pantalla los últimos k bits de un número entero. */
void mostrar_ultimos_k_bits(int numero_s, int k) {
    unsigned int numero = (unsigned int)numero_s;
    int tamano_int = sizeof(int) * CHAR_BIT;
    if (k <= 0) {
        printf("Error: k debe ser mayor que 0.\n");
        return;
    }
    if (k > tamano_int) {
        k = tamano_int;
    }
    printf("Los últimos %d bits de %d son: ", k, numero_s);
    for (int i = k - 1; i >= 0; i--) {     
        int bit = (numero >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
int main(void) {
    int num1 = 45; 
    mostrar_ultimos_k_bits(num1, 8);  
    return EXIT_SUCCESS;
}