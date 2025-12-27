/* fichero areacircunferencia.c */
/*Este programa calcula el área de una circunferencia de radio válido*/
#include <stdio.h>
#include <stdlib.h>
#define PI_CONST 3.141592653589793 
double AreaCircunferencia(double r) {
    return PI_CONST * r * r; 
}
int main(void) {
    double radio; 
    int valor_leido;
    printf("Introduce el radio de la circunferencia: ");
    valor_leido = scanf("%lf", &radio); 
    while (valor_leido != 1 || radio <= 0) {
        while (getchar() != '\n');         
        printf( "\n   ERROR: El radio debe ser un número positivo." );
        printf( "\n\n   Introduzca radio: " );
        valor_leido = scanf( "%lf", &radio );
    }
    printf( "El Área de la circunferencia es: %.4lf\n", AreaCircunferencia(radio)); 
    return EXIT_SUCCESS;
}


