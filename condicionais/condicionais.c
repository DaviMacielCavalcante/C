#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';

    if(a == 5){
        printf("\nA variável a = 5");
    }

    if(b == 2.5){
        printf("\nA variável b = 2.5");
    }

    if(c == 'x'){
        printf("\nA variável c = x");
    }

    if(a % 2 == 1){
        printf("\na é ímpar");
    }
    else {
        printf("\na é par");
    }

    if(opcao == 1){
        printf("\nA opção = 1");
    } else if(opcao == 2){ 
        printf("\nA opção = 2");
    } else {
        printf("\nA opção não é igual a 1 e nem 2");
    }
}