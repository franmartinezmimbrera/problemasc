/* fichero ladotriangulo.c */
/* Este programa calcula el valor del lado a de un triangulo rectángulo usando el valor del lado b y la hipotenusa h*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    double a, b, h;
    int valor_leido;

    printf ("Introduzca el valor del lado \"b\" del triángulo rectángulo: "); 
    valor_leido = scanf ("%lf", &b);
    if (valor_leido != 1 || b <= 0.0) {
        printf("Error: El lado 'b' debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    printf ("Introduzca el valor de la hipotenusa del triángulo rectángulo: "); 
    valor_leido = scanf ("%lf", &h);
    if (valor_leido != 1 || h <= 0.0) {
        printf("Error: La hipotenusa debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    if (b >= h) {
        printf("Error: La hipotenusa (%.2lf) debe ser mayor que el cateto 'b' (%.2lf).\n", h, b);
        return EXIT_FAILURE;
    }
    a = sqrt((h * h) - (b * b));  
    printf ("El valor del lado \"a\" del triángulo rectángulo es: %.4lf\n", a);
    return EXIT_SUCCESS;
}