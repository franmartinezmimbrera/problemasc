/* vigenere.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1024
void cifrarVigenere(char *mensaje, const char *clave) {
    int i, j = 0; int lenClave = strlen(clave);
    for (i = 0; mensaje[i] != '\0'; i++) {
        char ch = mensaje[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';            
            char k = toupper(clave[j % lenClave]) - 'A';            
            mensaje[i] = (char)((ch - base + k) % 26 + base);            
            j++; 
        }
    }
}
int main() {
    char mensaje[MAX];char clave[100];
    printf("Introduce el mensaje: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;
    printf("Introduce la palabra clave (solo letras): ");
    scanf("%s", clave);
    cifrarVigenere(mensaje, clave);
    printf("\nMensaje Cifrado Vigenere: %s\n", mensaje);
    return EXIT_SUCCESS;
}