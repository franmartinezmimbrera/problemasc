/* fichero costecoche.c */
/* Este programa calcula el precio total de un coche*/

#define GANANCIA 1.15
#define IVA 1.21
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    double costecoche, pvantesimpuestos, preciototal; 
    int valor_leido;

    printf("Introduce el coste del vehiculo: ");
    valor_leido = scanf("%lf", &costecoche);
    if (valor_leido != 1 || costecoche < 0.0) {
        printf("Error: El coste debe ser un número positivo o cero.\n");
        return EXIT_FAILURE;
    }

    pvantesimpuestos = costecoche * GANANCIA; 
    preciototal = pvantesimpuestos * IVA;
    printf("El precio total del automovil nuevo para el comprador es: %.2lf EUR\n", preciototal);
    return EXIT_SUCCESS;       
}