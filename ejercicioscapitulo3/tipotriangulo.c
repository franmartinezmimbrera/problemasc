/* fichero tipotriangulo.c */
/* Este programa calcula el tipo de triángulo en función de los lados*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    double l1, l2, l3; int valor_leido;
    printf("Introduce lo que mide el primer lado del triángulo: ");
    valor_leido = scanf("%lf", &l1);
    if (valor_leido != 1 || l1 <= 0.0) {
        printf("Error: El lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce lo que mide el segundo lado del triángulo: ");
    valor_leido = scanf("%lf", &l2);
    if (valor_leido != 1 || l2 <= 0.0) {
        printf("Error: El lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce lo que mide el tercer lado del triángulo: ");
    valor_leido = scanf("%lf", &l3);
    if (valor_leido != 1 || l3 <= 0.0) {
        printf("Error: El lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1) {
     printf("\nError Geométrico: Los lados NO forman un triángulo válido.\n");
        return EXIT_FAILURE;
    }
    if (l1 == l2 && l2 == l3) {printf("\nEl Triángulo es EQUILÁTERO (Tres lados iguales).\n");}
    else if (l1 == l2 || l1 == l3 || l3 == l2) {printf("\nEl Triángulo es ISÓSCELES (Dos lados iguales).\n");}
    else {
        printf("\nEl Triángulo es ESCALENO (Ningún lado igual).\n"); }
    return EXIT_SUCCESS;
}