/* fichero escribefinal.c */
#include <stdio.h>
#include <stdlib.h>
/*Ejercicio para escribir al final de un fichero de texto una nueva línea*/
int main(void) {
    FILE *fichero = NULL;
    
    /*Abrir el fichero en modo "a" (append)*/
    fichero = fopen("datos.txt", "a"); 

    if (fichero == NULL) {
        perror("Error al abrir el fichero datos.txt en modo append");
        return EXIT_FAILURE;
    }

    fprintf(fichero, "Esta es la línea AÑADIDIDA al final (Append).\n");
    fclose(fichero);
    printf("\n Se ha añadido una línea al final de 'datos.txt'.\n");
    
    return EXIT_SUCCESS;
}
