/* fichero ecuaciones.c */
/* Este programa resuelve ecuaciones de segundo grado por la fórmula general, mostrando solo soluciones reales */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void limpiar_buffer() {
    while (getchar() != '\n');
}
int main(void) {
    double a, b, c, d;
    double x1, x2;
    int valor_leido;
    do {
        printf("Ingrese coeficiente a (a != 0): ");
        valor_leido = scanf("%lf", &a);
        if (valor_leido != 1) {
            printf("Error: Entrada no numérica. Intente de nuevo.\n");
            limpiar_buffer();
            continue;
        }
        if (a == 0.0) {
            printf("Error: El coeficiente 'a' no puede ser cero en una ecuación de segundo grado.\n");
        }
    } while (a == 0.0); 
    do {
        printf("Ingrese coeficiente b: ");
        valor_leido = scanf("%lf", &b);
        if (valor_leido != 1) {
            printf("Error: Entrada no numérica. Intente de nuevo.\n");
            limpiar_buffer();
        }
    } while (valor_leido != 1);
    do {
        printf("Ingrese coeficiente c: ");
        valor_leido = scanf("%lf", &c);
        if (valor_leido != 1) {
            printf("Error: Entrada no numérica. Por favor, intente de nuevo.\n");
            limpiar_buffer();
        }
    } while (valor_leido != 1);
    d = (b * b) - (4.0 * a * c);
    if (d > 0.0) {
        x1 = (-b + sqrt(d)) / (2.0 * a);
        x2 = (-b - sqrt(d)) / (2.0 * a);
        printf("La ecuación tiene DOS soluciones reales distintas:\n");
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
    }
    else if (d == 0.0) {
        x1 = (-b) / (2.0 * a);
        printf("La ecuación tiene DOS soluciones reales IGUALES:\n");
        printf("x1 = x2 = %.4lf\n", x1);
    }
    else {
        printf("La ecuación NO tiene soluciones reales (Discriminante < 0).\n");
    }
    return EXIT_SUCCESS;
}