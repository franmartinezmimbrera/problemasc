/* sustitucion.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1024
const char *ALFABETO_NORMAL = "abcdefghijklmnopqrstuvwxyz";
const char *ALFABETO_CLAVE  = "qwertyuiopasdfghjklzxcvbnm";
void cifrarSustitucion(char *mensaje) {
    for (int i = 0; mensaje[i] != '\0'; i++) {
        if (isalpha(mensaje[i])) {
            int esMayuscula = isupper(mensaje[i]);
            char ch = tolower(mensaje[i]);
            char *ptr = strchr(ALFABETO_NORMAL, ch);
            if (ptr) {
                int index = ptr - ALFABETO_NORMAL;
                char sustituto = ALFABETO_CLAVE[index];
                mensaje[i] = esMayuscula ? toupper(sustituto) : sustituto;
            }
        }
    }
}
int main() {
    char mensaje[MAX];
    printf("Alfabeto Clave: %s\n", ALFABETO_CLAVE);
    printf("Introduce el mensaje a cifrar: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;
    cifrarSustitucion(mensaje);
    printf("Mensaje con Sustitucion: %s", mensaje);
    return EXIT_SUCCESS;
}
