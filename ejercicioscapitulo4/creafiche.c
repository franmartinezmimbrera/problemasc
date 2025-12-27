/* fichero creafiche.c */

#include <stdio.h>
#include <stdlib.h>
/* Ejemplo para crear/escribir ficheros*/

int main(void) {

    FILE *fichero = NULL;
    
    /* Abrir el archivo en modo escritura ("w"). */
    fichero = fopen("datos.txt", "w"); 

    if (fichero == NULL) {
        perror("Error al abrir/crear el fichero datos.txt");
        return EXIT_FAILURE;
    }

    fprintf(fichero, "Esta es la primera línea.\n");

    fprintf(fichero, "El número PI es aproximadamente %.4f\n", 3.14159);

    fprintf(fichero, "Tercera línea de ejemplo.\n");

    fclose(fichero);
    return EXIT_SUCCESS;
}
