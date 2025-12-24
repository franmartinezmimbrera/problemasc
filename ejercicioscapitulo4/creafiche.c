/* fichero creafiche.c */

#include <stdio.h>
#include <stdlib.h>
/* Ejemplo para crear/escribir ficheros*/

int main(void) {

    FILE *archivo = NULL;
    
    /* Abrir el archivo en modo escritura ("w"). */
    archivo = fopen("datos.txt", "w"); 

    if (archivo == NULL) {
        perror("Error al abrir/crear el archivo datos.txt");
        return EXIT_FAILURE;
    }

    fprintf(archivo, "Esta es la primera línea.\n");

    fprintf(archivo, "El número PI es aproximadamente %.4f\n", 3.14159);

    fprintf(archivo, "Tercera línea de ejemplo.\n");

    fclose(archivo);
    return EXIT_SUCCESS;
}
