#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior
    if (a > 2) {
        printf("\n%d é maior que 2", a);
    }

    //Maior ou igual
    if (c >= b) { 
        printf("\n%d é maior ou igual que %d", c, b);
    }

    //Menor
    if (a < 10) {
        printf("\n%d é menor que 10", b);
    }

    //Menor ou igual
    if (a <= 10) { 
        printf("\n%d é menor ou igual que %d", a);
    }

    //Diferente
    if (c != 10) {
        printf("\n%d não é 10", c);
    }

    if (d != 'a') {
        printf("\n%c não é a", d);
    }
}