/* fichero escribefinal.c */
#include <stdio.h>
#include <stdlib.h>
/*Ejercicio para escribir al final de un fichero de texto una nueva línea*/
int main(void) {
    FILE *archivo = NULL;
    
    /*Abrir el archivo en modo "a" (append)*/
    archivo = fopen("datos.txt", "a"); 

    if (archivo == NULL) {
        perror("Error al abrir el archivo datos.txt en modo append");
        return EXIT_FAILURE;
    }

    fprintf(archivo, "Esta es la línea AÑADIDIDA al final (Append).\n");
    fclose(archivo);
    printf("\n Se ha añaadido una línea al final de 'datos.txt'.\n");
    
    return EXIT_SUCCESS;
}
