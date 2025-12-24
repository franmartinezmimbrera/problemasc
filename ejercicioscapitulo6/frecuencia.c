/* frecuencia.c */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 2048
int main() {
    char mensaje[MAX]; int conteo[26] = {0}; int totalLetras = 0;
    printf("Introduce el texto cifrado para analizar: ");
    if (fgets(mensaje, MAX, stdin) == NULL) return EXIT_FAILURE;
    for (int i = 0; mensaje[i] != '\0'; i++) {
        if (isalpha(mensaje[i])) {
            int index = tolower(mensaje[i]) - 'a';
            conteo[index]++;
            totalLetras++;
        }
    }
    printf("\n Analisis de Frecuencias \n");
    printf("Total de letras analizadas: %d\n", totalLetras);    
    if (totalLetras > 0) {
        for (int i = 0; i < 26; i++) {
            if (conteo[i] > 0) {
                double porcentaje = (double)conteo[i] / totalLetras * 100.0;
                printf("Letra '%c': %d veces (%.2f%%)\n", 'A' + i, conteo[i], porcentaje);
            }
        }
        printf("\nNota: En español, 'E' (~13%%) y 'A' (~12%%) suelen ser las mas altas.\n");
    } else {
        printf("No se encontraron letras.\n");
    }
    return EXIT_SUCCESS;
}
