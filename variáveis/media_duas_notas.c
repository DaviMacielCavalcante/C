#include <stdio.h>
#include <stdlib.h>

void main(){

    float a, b;

    printf("Informe o valor da primeira nota: \n");

    scanf("%f", &a);

    printf("Informe o valor da segunda nota: \n");

    scanf("%f", &b);

    float c = (a + b) / 2;

    printf("A média das notas é: %f", c);
}