/* fichero conteo.c */
#include <stdio.h>
#include <ctype.h> 
#include <stdlib.h>
#define NUM_FRASES 4     
#define MAX_LONGITUD 200 
void convertir_a_mayusculas(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        s[i] = (char)toupper(s[i]);
        i++;
    }
}
int contar_vocales(const char s[]) {
    int contador = 0;int i = 0;
    while (s[i] != '\0') {
        switch (s[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            contador++;break;
        }
        i++;
    }
    return contador;
}
int main(void) {
    char lista_frases[NUM_FRASES][MAX_LONGITUD];int total_vocales = 0;
    printf("Introduce %d frases/líneas de texto:\n", NUM_FRASES);
    for (int i = 0; i < NUM_FRASES; i++) {
        printf("Frase %d: ", i + 1);
        if (fgets(lista_frases[i], MAX_LONGITUD, stdin) == NULL) {break;}
    }
    for (int i = 0; i < NUM_FRASES; i++) {
        char *frase = lista_frases[i]; int vocales_frase;
        convertir_a_mayusculas(frase);
        vocales_frase = contar_vocales(frase);
        total_vocales += vocales_frase;
        printf("Frase %d (MAYÚS): '%s' -> Vocales contadas: %d\n", 
               i + 1, frase, vocales_frase);
    }
    printf("El número total de vocales en todas las frases es: %d\n", total_vocales);
    return EXIT_SUCCESS;
}