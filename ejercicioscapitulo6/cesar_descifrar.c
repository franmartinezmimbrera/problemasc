/* cesar_descifrar.c */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#define MAX 1024
void descifrarCesar(char *mensaje, int desplazamiento) {
    int i = 0;
    while (mensaje[i] != '\0') {
        char ch = mensaje[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            mensaje[i] = (char)((ch - base - desplazamiento + 26) % 26 + base);
        }
        i++;
    }
}
int main() {
    char mensaje[MAX]; int n = 0;     
    printf("Introduce el mensaje cifrado: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;    
    printf("Introduce la clave original (n): ");    
    if (scanf("%d", &n) != 1) {
        printf("\nError: La clave debe ser un número entero.\n");
        return EXIT_FAILURE; 
    }
    descifrarCesar(mensaje, n % 26);
    printf("\nMensaje Descifrado: %s\n", mensaje);
    return EXIT_SUCCESS;
}
