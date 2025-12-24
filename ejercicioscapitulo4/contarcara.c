/* fichero contarcar.c */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
    FILE *archivo = NULL;
    int caracter;
    int contador_caracteres = 0;
    int contador_palabras = 0; 
    int dentro_de_palabra = 0; 
    archivo = fopen("datos.txt", "r");    
    if (archivo == NULL) {
        perror("Error al abrir el archivo datos.txt");
        return EXIT_FAILURE; 
    }
    while ((caracter = fgetc(archivo)) != EOF) {
        contador_caracteres++; 
        if (isspace(caracter)) {
            dentro_de_palabra = 0;
        } else {
            if (dentro_de_palabra == 0) {
                contador_palabras++; 
                dentro_de_palabra = 1; 
            }
        }
    }
    fclose(archivo);
    printf("Total de caracteres leídos: %d\n", contador_caracteres);
    printf("Total de palabras: %d\n", contador_palabras); 
    return EXIT_SUCCESS;
}