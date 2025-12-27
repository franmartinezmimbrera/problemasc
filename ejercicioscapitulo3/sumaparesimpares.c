/* fichero sumaparesimpares.c */
/*Calcula la suma de 10 números pasados por teclado distinguiendo entre los pares e impares*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANO_ARRAY 10

int main(void) {

    long long numeros[TAMANO_ARRAY];
    long long suma_pares = 0;
    long long suma_impares = 0;
    
    printf("Por favor, introduce %d números enteros:\n", TAMANO_ARRAY);
    for (int i = 0; i < TAMANO_ARRAY; i++) {
        int valor_leido;
        printf("Número %d: ", i + 1);
        while ((valor_leido = scanf("%lld", &numeros[i])) != 1) {
            while (getchar() != '\n');
            printf("Error: Entrada no válida. Debe ser un entero. Intenta de nuevo: ");
        }
    }

    for (int i = 0; i < TAMANO_ARRAY; i++) {
        long long numero_actual = numeros[i];
        if (numero_actual % 2 == 0) {
            suma_pares += numero_actual;
            printf("Añadiendo %lld a la suma par.\n", numero_actual);
        } else {
            suma_impares += numero_actual;
            printf("Añadiendo %lld a la suma impar.\n", numero_actual);
        }
    }

    printf("Números ingresados: [");
    for (int i = 0; i < TAMANO_ARRAY; i++) {
        printf("%lld%s", numeros[i], (i < TAMANO_ARRAY - 1 ? ", " : ""));
    }

    printf("]\n");
    printf("Suma total de los números PARES: %lld\n", suma_pares);
    printf("Suma total de los números IMPARES: %lld\n", suma_impares);
    
    return EXIT_SUCCESS;
}