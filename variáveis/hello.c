#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos

    setlocale(LC_ALL, "");

    printf("Olá Mundo!\n");

    int a = 50;

    int b = 6;

    printf("%d \n", a + b);

    //Lendo valor inteiro

    printf("O valor de a é: %d \n", a);

    scanf("%d", &a);

    printf("O valor de a é: %d \n", a);

    //Lendo valor quebrado

    float c = 5.5;

    printf("O valor de c é: %f \n", c);

    scanf("%f", &c);

    printf("O valor de c é: %f \n", c);

    //Lendo letras unitárias

    char d = 't';

    printf("O valor de d é: %c \n", d);

    //Limpando o buffer para poder ler outro tipo de variável

    while (getchar()!= '\n');   

    scanf("%c", &d);

    printf("O valor de d é: %c", d);
}