/* fichero leerfiche.c */
#include <stdio.h>
#include <stdlib.h>
/*Ejemplo para leer ficheros de texto*/

int main(void) {

    FILE *archivo = NULL;
    char linea[100]; 
    
    /* Abrir el archivo en modo lectura ("r")*/

    archivo = fopen("datos.txt", "r");

    if (archivo == NULL) {
        perror("Error al abrir el archivo datos.txt");
        return EXIT_FAILURE;
    }

    printf("\nContenido de 'datos.txt':\n");

    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }

    fclose(archivo);
    return EXIT_SUCCESS;
}
