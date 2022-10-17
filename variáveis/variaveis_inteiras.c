#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo uma variável
    int a = 5, b;

    printf("%d", a);

    //Concatenando
    printf("\nO valor da var a é: %d", a);

    //Mudando o valor de "a"
    a = 15;

    printf("\nO valor da var a é: %d", a);

    //Lendo valores
    scanf("%d", &b);

    printf("\nO valor da var b é: %d", b);

    //Pula linhas
    printf("\n");

    //Imprime na tela
    printf("Oi mundo!");

    //Pausa o programa após executar
    system("pause");
}