/* fichero leelongi.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_CADENA 200 
/* Lee una cadena de texto, dice su longitud y la concatena a otra */
int main(void) {
    
    char cadena[MAX_CADENA]; 
    char cadena_resultado[MAX_CADENA]; 
    size_t len; 
    printf("Introduzca cadena (o solo Enter para terminar): \n");
    while (fgets(cadena, sizeof(cadena), stdin) != NULL) {
        len = strlen(cadena);
        if (len > 0 && cadena[len - 1] == '\n') {
            cadena[len - 1] = '\0';
            len--; 
        }
        if (len == 0) {break;}
        printf ("La cadena contiene %zu caracteres. \n", len); 
        strcpy(cadena_resultado, cadena);
        printf ("Concatenación: %s \n", strcat(cadena_resultado, ".txt"));
        printf("Introduzca cadena (o solo Enter para terminar): \n");
    }
    return EXIT_SUCCESS;
}