/* passgen.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char *CHARSET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

int main() {
    int longitud;
    int charsetLen = strlen(CHARSET);

    srand((unsigned int)time(NULL));

    printf("Generador de contraseñas seguras\n");
    printf("Introduce la longitud deseada: ");
    if (scanf("%d", &longitud) != 1 || longitud <= 0) {
        printf("Longitud no valida.\n");
        return EXIT_FAILURE;
    }

    printf("Generando contrasena...: ");
    
    for (int i = 0; i < longitud; i++) {
        int index = rand() % charsetLen;
        putchar(CHARSET[index]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
