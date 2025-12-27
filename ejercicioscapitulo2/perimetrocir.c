/* fichero perimetrocir.c */
/* Este programa calcula el perímetro de una circunferencia*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592653589793 

int main(void){

    double perimetro, radio;
    int valor_leido;

    printf( "Introduzca el radio: " );
    valor_leido = scanf( "%lf", &radio );
    if(valor_leido != 1){
        printf("Error: La entrada debe de ser un número.\n");
        return EXIT_FAILURE;
    }
    if (radio <= 0.0){
        printf("Error: El valor del radio debe de ser un número estrictamente positivo (> 0).\n");
        return EXIT_FAILURE; 
    }

    perimetro = 2.0 * PI * radio;
    printf( "\n El perímetro es: %.4lf\n", perimetro );
    return EXIT_SUCCESS;
}