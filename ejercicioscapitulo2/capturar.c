/* fichero capturar.c */
/* Este programa hace preguntas y con ello hace respuestas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int   edad,c; float peso; char  color[20]; 
    printf("Dinos tu Edad, peso y color favorito:\n");
    printf("\n       Edad: ");
    if (scanf("%d", &edad) != 1) {
        printf("Error al leer la edad.\n");
        return EXIT_FAILURE;
    }
    printf("\n       Peso: ");
    if (scanf("%f", &peso) != 1) {
        printf("Error al leer el peso.\n");
        return EXIT_FAILURE;
    }
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\n Color favorito: ");
    if (fgets(color, 20, stdin) == NULL) {
        printf("Error al leer el color.\n");
        return EXIT_FAILURE;
    }
    color[strcspn(color, "\n")] = '\0';
    printf("El %s !!! \n", color);
    printf("¡Cómo puede gustarte el %s,\n ", color); 
    printf("con %d años y pesando %6.2f Kg.?\n", edad, peso); 
    return EXIT_SUCCESS;
}