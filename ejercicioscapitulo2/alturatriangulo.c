/* fichero alturatriangulo.c */
/* Este programa calcula la altura de un triángulo equilátero*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    double l, h;
    int valor_leido;
    printf ("Introduzca lado de un triángulo equilátero: "); 
    valor_leido = scanf ("%lf", &l); 
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número.\n");
        return EXIT_FAILURE;
    }
    if (l <= 0.0) {
        printf("Error: El lado debe ser un número positivo.\n");
        return EXIT_FAILURE;
    }
    h = (sqrt(3.0) * l) / 2.0;
    printf ("La altura de un triángulo equilátero de lado %.4lf es: %.4lf \n", l, h);
    return EXIT_SUCCESS;
}