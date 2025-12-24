/* fichero invierte.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 

void leer_cadena(char s[], int size) {
    int c, i = 0;
    while ((i < size - 1) && ((c = getchar()) != EOF) && (c != '\n')) {
        s[i++] = (char)c;
    }
    s[i] = '\0'; 
}

/* Procedimiento que invierte la cadena de texto en su lugar*/
void invertir_cadena(char s[]) {
    int longitud = 0;
    
    while (s[longitud] != '\0') {
        longitud++;
    }

    int inicio = 0;
    int fin = longitud - 1;
    char temp;

    while (inicio < fin) {
        temp = s[inicio];
        s[inicio] = s[fin];
        s[fin] = temp;
        inicio++;
        fin--;
    }
}

int main(void) {
    char cadena[MAX_SIZE];
    
    printf("Introduce una cadena de texto: ");
    leer_cadena(cadena, MAX_SIZE);
    
    printf("Cadena original: \"%s\"\n", cadena);
    
    invertir_cadena(cadena);
    printf("Cadena invertida: \"%s\"\n", cadena);
    return EXIT_SUCCESS;
}