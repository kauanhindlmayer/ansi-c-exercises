/*
Faça um programa que peça um número correspondente a um determinado 
ano e em seguida informe se este ano é ou não bissexto
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int ano, resultado;

    printf("Digite um numero correspondente a um determinado ano: \n");
    scanf("%i", &ano);
    fflush(stdin);

    resultado = ano % 4;

    if (resultado == 0) {
        printf("\nE um ano bissexto!\n");
    } else {
        printf("\nNao e um ano bissexto!\n");
    }

    return 0;
}