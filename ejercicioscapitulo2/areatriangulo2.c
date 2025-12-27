/* fichero areatriangulo2.c */
/* Este programa calcula el Área de un triángulo equilátero a partir de uno de sus lados*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    
    double l, area;
    int valor_leido;
    
    printf("Introduce un lado del triángulo equilátero: ");

    valor_leido = scanf("%lf", &l); 
    
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número.\n");
        return EXIT_FAILURE;
    }
    if (l <= 0.0) {
        printf("Error: El lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    area = (sqrt(3.0) / 4.0) * l * l;
    printf("El área del triángulo equilátero de lado %.4lf es: %.4lf\n", l, area);
    
    return EXIT_SUCCESS;
}