/* fichero areatriangulo.c */
/* Este programa calcula el área de un triángulo a partir de sus lados mediante la fórmula de Herón */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    
    double l1, l2, l3, area, sp;
    int valor_leido;
    
    printf("Introduce lo que mide el primer lado del triángulo: ");
    valor_leido = scanf("%lf", &l1);
    if (valor_leido != 1 || l1 <= 0.0) {
        printf("Error: El primer lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }

    printf("Introduce lo que mide el segundo lado del triángulo: ");
    valor_leido = scanf("%lf", &l2);
    if (valor_leido != 1 || l2 <= 0.0) {
        printf("Error: El segundo lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }

    printf("Introduce lo que mide el tercer lado del triángulo: ");
    valor_leido = scanf("%lf", &l3);
    if (valor_leido != 1 || l3 <= 0.0) {
        printf("Error: El tercer lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }

    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1) {
        printf("Error: Los lados introducidos no forman un triángulo válido (Desigualdad Triangular).\n");
        return EXIT_FAILURE;
    }

    sp = (l1 + l2 + l3) / 2.0;
    area = sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));
    printf("El área del triángulo es: %.4lf\n", area);
    
    return EXIT_SUCCESS;
}