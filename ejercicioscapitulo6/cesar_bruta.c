/* cesar_bruta.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1024
void imprimirIntento(const char *mensaje, int key) {
    printf("Clave %2d: ", key);
    for (int i = 0; mensaje[i] != '\0'; i++) {
        char ch = mensaje[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            char descifrado = (char)((ch - base - key + 26) % 26 + base);
            putchar(descifrado);
        } else {
            putchar(ch);
        }
    }
}
int main() {
    char mensaje[MAX];
    printf("Introduce el texto cifrado para atacar por fuerza bruta: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;
    printf("\n Resultados del Criptoanalisis \n");
    for (int k = 1; k < 26; k++) {
        imprimirIntento(mensaje, k);
    }
    return EXIT_SUCCESS;
}
