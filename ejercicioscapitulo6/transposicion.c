/* transposicion.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024
int main() {
    char mensaje[MAX];
    char cifrado[MAX];
    int columnas;
    printf("Introduce el mensaje (sin espacios para este ejemplo): ");
    scanf("%s", mensaje); 
    printf("Introduce el numero de columnas (clave): ");
     if (scanf("%d", &columnas) != 1) {
        printf("\nError: El número de columans debe ser un número entero.\n");
        return EXIT_FAILURE; 
    }
    int len = strlen(mensaje);
    int filas = (len + columnas - 1) / columnas; 
    int k = 0;    
    for (int c = 0; c < columnas; c++) {
        for (int f = 0; f < filas; f++) {
            int index = f * columnas + c;
            if (index < len) {
                cifrado[k++] = mensaje[index];
            }
        }
    }
    cifrado[k] = '\0';
    printf("\nMensaje Original: %s", mensaje);
    printf("\nMensaje Transpuesto: %s\n", cifrado);
    return EXIT_SUCCESS;
}
