/* fichero saludo.c */
/* Este programa hace un saludo personalizado */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char nombre[25];
    printf("¡Hola! ¿Cómo te llamas?\n");
    if(scanf("%24s", nombre)!=1){
       printf("Error: No se pudo leer el nombre correctamente.\n");
    }
    printf("¿Qué tal estás, %s ?\n", nombre);
    return EXIT_SUCCESS;
}

