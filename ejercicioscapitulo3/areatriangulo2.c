/* fichero areatriangulo2.c */
/* Este programa calcula el Área de un triángulo a  partir de sus lados mediante la fórmula de Herón*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*Función de Cálculo Área Triangulo*/
double AreaTrianguloHeron(double l1, double l2, double l3) {
    double area;
    double sp;
    sp = (l1 + l2 + l3) / 2.0;
    area = sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));
    return area;
}
int main(void) {   
    double l1x, l2x, l3x;
    int valor_leido;
    printf("Introduce lo que mide el primer lado del triángulo: ");
    valor_leido = scanf("%lf", &l1x);
    if (valor_leido != 1 || l1x <= 0.0) {
        printf("Error: El primer lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce lo que mide el segundo lado del triángulo: ");
    valor_leido = scanf("%lf", &l2x);
    if (valor_leido != 1 || l2x <= 0.0) {
        printf("Error: El segundo lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce lo que mide el tercer lado del triángulo: ");
    valor_leido = scanf("%lf", &l3x);
    if (valor_leido != 1 || l3x <= 0.0) {
        printf("Error: El tercer lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    if (l1x + l2x <= l3x || l1x + l3x <= l2x || l2x + l3x <= l1x) {
        printf("Error: Los lados (%.2lf, %.2lf, %.2lf) no forman un triángulo válido.\n", l1x, l2x, l3x);
        return EXIT_FAILURE;
    }
    double area_calculada = AreaTrianguloHeron(l1x, l2x, l3x);
    printf("El área del triángulo es: %.4lf\n", area_calculada);
    return EXIT_SUCCESS;
}