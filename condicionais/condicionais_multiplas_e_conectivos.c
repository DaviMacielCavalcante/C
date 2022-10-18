#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a = 14;

    if (a > 5 && a < 15) {
        printf("A variável a está entre 5 e 15");
    }

    if (a > 5 || a < 15){
        printf("\nA variável a é maior que 5 e menor que 15");
    }

    if ((a > 5 && a < 15) || a == 20) {
        printf("\nA variável a está entre 5 e 15 ou é igual a 20");
    }
}