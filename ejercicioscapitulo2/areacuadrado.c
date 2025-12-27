/* fichero areacuadrado.c */
/* Se calcula el área de un cuadrado a partir de uno de sus lados */
#include <stdio.h>
#include <stdlib.h>

int  main(void) {    
    double l1,area;
    printf("Introduce valor lado de un cuadrado: ");
    if (scanf("%lf", &l1) != 1) {
        printf("Error: La entrada debe ser un numero.\n");
        return EXIT_FAILURE; 
    }
    if (l1 <= 0) {
        printf("Error: El lado debe ser un numero positivo (> 0).\n");
        return EXIT_FAILURE;
    }
    area=l1*l1;
    printf("El área del cuadrado es: %.2lf\n",area);
    return EXIT_SUCCESS;
}
