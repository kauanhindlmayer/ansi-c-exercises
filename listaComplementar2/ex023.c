/*
    23. Faça um programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina. 
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1 . 
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int valor, nota100, nota50, nota10, nota5, moeda1, aux;

    printf("Digite o valor do saque: R$\n");
    scanf("%i", &valor);
    fflush(stdin);

    if (valor < 9 || valor > 600) {
        printf("Valor Invalido!\n");
        return 0;
    } 

    aux = valor;

    nota100 = valor / 100;
    valor %= 100;

    nota50 = valor / 50;
    valor %= 50;

    nota10 = valor / 10;
    valor %= 10;

    nota5 = valor / 5;
    valor %= 5;

    moeda1 = valor / 1;

    printf("Para sacar a quantia de %i:\nNotas de R$100: %i\nNotas de R$50: %i\nNotas de R$10: %i\nNotas de R$5: %i\nMoedas de R$1: %i\n", aux, nota100, nota50, nota10, nota5, moeda1);

    return 0;
}