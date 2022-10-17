#include <stdio.h>
#include <stdlib.h>

void main(){

    int a, b;

    printf("Informe o valor da primeira nota: \n");

    scanf("%d", &a);

    printf("Informe o valor da segunda nota: \n");

    scanf("%d", &b);

    printf("A diferença das notas é: %d", abs(a - b));
}