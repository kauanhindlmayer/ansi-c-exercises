/*
5.	Faça um programa que peça um número e informe se o número é inteiro ou quebrado
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    fflush(stdin);

    num1 == (int)num1 ? printf("Inteiro"): printf("Quebrado");    

    return 0;
}
