/* fichero mayor.c */
/* Este programa calcula cuál es el número > de 10 introducidos por teclado*/
#include <stdio.h>
#include <stdlib.h>
#define N_ELEMENTOS 10
long long mayor(long long numeros[], int nelementos) {
    long long max = numeros[0];  
   for (int i = 1; i < nelementos; i++) {
      if (numeros[i] > max) {max = numeros[i];}   
   }   
   return max;
}
int main(void) {
    long long numerosin[N_ELEMENTOS];int valor_leido;
    printf("El programa le pedirá que introduzca %d números enteros.\n", N_ELEMENTOS);
    for (int i = 0; i < N_ELEMENTOS; i++) {
        printf("Introduzca número %d de %d: ", i + 1, N_ELEMENTOS);
        valor_leido = scanf("%lld", &numerosin[i]);
        if (valor_leido != 1) {
            while (getchar() != '\n');
            printf("Error: Entrada no válida. Debe introducir un número entero. Intente de nuevo.\n");
            i--; 
        }
    }
    printf("\nEl número mayor de todos los introducidos es: %lld \n", mayor(numerosin, N_ELEMENTOS));
    return EXIT_SUCCESS;
}