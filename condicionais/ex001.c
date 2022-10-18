#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    float a, b, c, d;    

    printf("Informe as notas: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (a + b + c) / 3; 

    if (d > 7) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}