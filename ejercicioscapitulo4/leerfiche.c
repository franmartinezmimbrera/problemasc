/* fichero leerfiche.c */
#include <stdio.h>
#include <stdlib.h>
/*Ejemplo para leer ficheros de texto*/

int main(void) {

    FILE *fichero = NULL;
    char linea[100]; 
    
    /* Abrir el fichero en modo lectura ("r")*/

    fichero = fopen("datos.txt", "r");

    if (fichero == NULL) {
        perror("Error al abrir el fichero datos.txt");
        return EXIT_FAILURE;
    }

    printf("\nContenido de 'datos.txt':\n");

    while (fgets(linea, sizeof(linea), fichero) != NULL) {
        printf("%s", linea);
    }

    fclose(fichero);
    return EXIT_SUCCESS;
}
