/* fichero sumanumeros.c */
/* Este programa calcula la suma de los números introducidos por teclado mientras no se introduzca el número -50 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    double numero;
    double suma = 0.0;
    int valor_leido; 
    printf("El programa terminará al introducir el número -50.\n");
    do {        
        printf("Introduzca número a sumar: ");
        valor_leido = scanf("%lf", &numero); 
        while (valor_leido != 1) {
            while (getchar() != '\n');            
            printf("\n   ERROR: La entrada debe ser un número.\n");
            printf("Introduzca número a sumar: ");
            valor_leido = scanf("%lf", &numero);
        }
        if (numero != -50.0) {
           suma = suma + numero;
        }
    } while (numero != -50.0); 
    printf("\nLa suma total de los números introducidos es: %.2lf\n", suma);    
    return EXIT_SUCCESS;
}