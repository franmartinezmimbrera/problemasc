/* xor_cifra_descifra.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024
void xorCipher(char *mensaje, const char *clave) {
    int lenMensaje = strlen(mensaje); int lenClave = strlen(clave);
    for (int i = 0; i < lenMensaje; i++) {
        mensaje[i] = mensaje[i] ^ clave[i % lenClave];
    }
}
int main() {
    char mensaje[MAX]; char clave[100];
    printf("Introduce el texto: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;
    mensaje[strcspn(mensaje, "\n")] = 0;
    printf("Introduce la clave: ");
    if (fgets(clave, sizeof(clave), stdin) == NULL) return EXIT_FAILURE;
    clave[strcspn(clave, "\n")] = 0; 
    if (strlen(clave) == 0) {
        printf("Error: La clave no puede estar vacía.\n");
        return EXIT_FAILURE;
    }
    xorCipher(mensaje, clave);
    printf("Texto Cifrado (hex): ");
    for(int i=0; i<strlen(mensaje); i++) printf("%02X ", (unsigned char)mensaje[i]);
    printf("\n");
    xorCipher(mensaje, clave);
    printf("Texto Descifrado (original): %s\n", mensaje);
    return EXIT_SUCCESS;
}
