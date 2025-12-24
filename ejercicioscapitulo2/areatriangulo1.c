/* fichero areatriangulo1.c */
/* Este programa calcula el Área de un triángulo rectángulo a partir de la base y la altura */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    
    double a, b, area;
    int valor_leido;
    
    printf("Introduce la base del triángulo rectángulo: ");
    valor_leido = scanf("%lf", &a); 

    if (valor_leido != 1 || a <= 0.0) {
        printf("Error: La base debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }

    printf("Introduce la altura del triángulo rectángulo: ");
    valor_leido = scanf("%lf", &b); 

    if (valor_leido != 1 || b <= 0.0) {
        printf("Error: La altura debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    area = (b * a) / 2.0; 
    printf("El área del triángulo rectángulo es: %.2lf\n", area);
    return EXIT_SUCCESS;
}