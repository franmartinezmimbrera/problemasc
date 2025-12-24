/* fichero preciomedio.c */
/* Este programa calcula el precio medio de un producto*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    double precio1, precio2, precio3, media;
    int valor_leido; 
    printf("Introduzca el precio en establecimiento 1, en euros: ");
    valor_leido = scanf("%lf", &precio1);
    if (valor_leido != 1 || precio1 < 0.0) {
        printf("Error:La entrada debe ser un número >= cero.\n");
        return EXIT_FAILURE;
    }
    printf("Introduzca el precio en establecimiento 2, en euros: ");
    valor_leido = scanf("%lf", &precio2);
    if (valor_leido != 1 || precio2 < 0.0) {
        printf("Error: La entrada debe ser un número >= cero.\n");
        return EXIT_FAILURE;
    }
    printf("Introduzca el precio en establecimiento 3, en euros: ");
    valor_leido = scanf("%lf", &precio3);
    if (valor_leido != 1 || precio3 < 0.0) {
        printf("Error:La entrada debe ser un número >= cero.\n");
        return EXIT_FAILURE;
    }
    media = (precio1 + precio2 + precio3) / 3.0; 
    printf("El precio medio del producto es de %.2lf euros.\n", media); 
    return EXIT_SUCCESS;
}