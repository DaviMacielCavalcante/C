#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a = 1;
    char b = 'x';

    switch (a) {
    case 1:
        printf("Opção 1 escolhida");
        break;
    case 2:
        printf("Opção 2 escolhida"); 
        break;
    case 3:
        printf("Opção 3 escolhida");
        break;
    default:
        printf("Opção inválida");
        break;
    }
}