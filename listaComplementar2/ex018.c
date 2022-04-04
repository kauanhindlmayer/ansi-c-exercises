/*
Faça um programa que calcule uma equação do 2o. grau, na forma x2+bx+c.
O programa deve fazer todas as consistências de dados e informar caso 
o usuário entre com dados errados. Deve ainda informar se o delta é 
positivo ou negativo, e os valores de X quando existirem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int valorDeA, valorDeB, valorDeC, delta, valor1, valor2;

    printf("Digite o valor de A: \n");
    scanf("%i", &valorDeA);
    fflush(stdin);

    printf("Digite o valor de B: \n");
    scanf("%i", &valorDeB);
    fflush(stdin);

    printf("Digite o valor de C: \n");
    scanf("%i", &valorDeC);
    fflush(stdin);

    delta = (valorDeB * valorDeB) - 4 * valorDeA * valorDeC;
    valor1 = ((valorDeB * -1) + (pow(delta, 1/2)))/ (2 * valorDeA);
    valor2 = ((valorDeB * -1) - (pow(delta, 1/2)))/ (2 * valorDeA);

    if (delta > 0) {
        printf("Delta e positivo!\n");
    } else {
        printf("Delta e negativo!\n");
    }

    printf("Valor do x': %i\nValor do x'': %i\n\n", valor1, valor2);

    return 0;
}