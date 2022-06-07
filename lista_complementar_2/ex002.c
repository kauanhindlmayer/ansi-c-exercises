/*
    Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    fflush(stdin);

    (num1 > 0) ? printf("O numero %0.1f e positivo!", num1) : printf("O numero %0.1f e negativo!", num1);

    return 0;
}