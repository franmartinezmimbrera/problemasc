/* fichero estadisticas.c */
/* Este programa calcula estadísticas sobre alumnos */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int suspensos, aprobados, notables, sobresalientes,valor_leido;
    double poraprot, porsus, pornot, porsobre, porapro,totalalumnos; 
    
    printf("Introduce el número total de suspensos: ");
    valor_leido = scanf("%i", &suspensos);
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número entero.\n");
        return EXIT_FAILURE;
    }
    if (suspensos < 0) {
        printf("Error: El número de alumnos no puede ser negativo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce el número total de aprobados: ");
    valor_leido = scanf("%i", &aprobados);
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número entero.\n");
        return EXIT_FAILURE;
    }
    if (aprobados < 0) {
        printf("Error: El número de alumnos no puede ser negativo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce el número total de notables: ");
    valor_leido = scanf("%i", &notables);
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número entero.\n");
        return EXIT_FAILURE;
    }
    if (notables < 0) {
        printf("Error: El número de alumnos no puede ser negativo.\n");
        return EXIT_FAILURE;
    }
    printf("Introduce el número total de sobresalientes: ");
    valor_leido = scanf("%i", &sobresalientes);
    if (valor_leido != 1) {
        printf("Error: La entrada debe ser un número entero.\n");
        return EXIT_FAILURE;
    }
    if (sobresalientes < 0) {
        printf("Error: El número de alumnos no puede ser negativo.\n");
        return EXIT_FAILURE;
    }
    totalalumnos = (double)suspensos + aprobados + notables + sobresalientes;
    if (totalalumnos <= 0.0) {
        printf("Error: El número total de alumnos debe ser mayor que cero para calcular porcentajes.\n");
        return EXIT_FAILURE;
    }
    poraprot = ((double)aprobados + notables + sobresalientes) / totalalumnos * 100.0;
    porsus   = ((double)suspensos / totalalumnos) * 100.0;
    pornot   = ((double)notables / totalalumnos) * 100.0;
    porsobre = ((double)sobresalientes / totalalumnos) * 100.0;
    porapro  = ((double)aprobados / totalalumnos) * 100.0;
    
    printf("El número total de alumnos es: %.0f\n", totalalumnos);
    printf("El porcentaje de alumnos que superan la asignatura es: %.2f %% \n", poraprot);
    printf("El porcentaje de alumnos que suspenden la asignatura es: %.2f %% \n", porsus);
    printf("El porcentaje de alumnos que sacan notable en la asignatura es: %.2f %% \n", pornot);
    printf("El porcentaje de alumnos que sobresalen en la asignatura es: %.2f %% \n", porsobre);
    printf("El porcentaje de alumnos que han sacado un aprobado (solo aprobado) es: %.2f %% \n", porapro);  
 
    return EXIT_SUCCESS;
}