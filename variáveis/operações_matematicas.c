#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int a = 5, b = 3;
    float c = a % b;

    //Soma
    printf("A soma de %d e %d = %d", a, b, a + b);

    //Subtração
    printf("\nA subtração de %d e %d = %d", a, b, a - b);

    //Divisão
    printf("\nA divisão de %d e %d = %d", a, b, a / b);

    //Multiplicação
    printf("\nA multiplicação de %d e %d = %d", a, b, a * b);

    //Resto da Divisão
    printf("\no resto da divisão de %d e %d = %d", a, b, c);

    //Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    system("pause");
}