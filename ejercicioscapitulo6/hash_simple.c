/* hash_simple.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX 1024

unsigned long generarHashKR(const char *str) {
    unsigned long hashval = 0; 
    int c;
    while ((c = *str++)) {
        hashval = c + 31 * hashval;
    }
    return hashval;
}

int main() {
    
    char entrada[MAX];
    printf("Introduce un texto para generar su Hash (K&R): ");
    
    if (fgets(entrada, MAX, stdin) == NULL) return EXIT_FAILURE;

    unsigned long hashValue = generarHashKR(entrada);
    
    printf("Entrada: %s", entrada); // Si no quitaste el \n, esto salta de línea solo
    printf("Hash calculado (Hex): %lX\n", hashValue);
    printf("Hash calculado (Dec): %lu\n", hashValue);

    return EXIT_SUCCESS;
}