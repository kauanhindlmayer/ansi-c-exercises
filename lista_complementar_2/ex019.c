/*
    Faça um programa que peça um número correspondente a um determinado 
    ano e em seguida informe se este ano é ou não bissexto
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int ano;

    printf("Digite um numero correspondente a um determinado ano: \n");
    scanf("%i", &ano);
    fflush(stdin);

    if ((ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0) {
        printf("\nO ano e bissexto (tem 366 dias).\n");
    } else {
        printf("\nO ano NAO e bissexto (tem 365 dias).\n");
    }

    return 0;
}