/* cesar_cifrar.c */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 1024
void cifrarCesar(char *mensaje, int desplazamiento) {
    int i = 0;
    while (mensaje[i] != '\0') {
        char ch = mensaje[i];        
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';            
            mensaje[i] = (char)((ch - base + desplazamiento) % 26 + base);
        }
        i++;
    }
}
int main() {
    char mensaje[MAX]; int n;
    printf("Introduce el mensaje a cifrar: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;
    printf("Introduce el desplazamiento (clave n): ");
    if (scanf("%d", &n) != 1) {
        printf("\nError: La clave debe ser un número entero.\n");
        return EXIT_FAILURE; 
    }
    n = n % 26;
    cifrarCesar(mensaje, n);
    printf("\nMensaje Cifrado: %s\n", mensaje);
    return EXIT_SUCCESS;
}
