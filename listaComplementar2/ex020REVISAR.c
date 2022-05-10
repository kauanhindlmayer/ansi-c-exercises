/*
    Faça um programa que peça uma data no formato dd/mm/aaaa e 
    determine se a mesma é uma data válida. Consistências: 
    Ano maior que zero. Mês entre 1 e 12. Meses com 30 e 31 dias. 
    Mês com 28 ou 29 dias.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int dia, mes, ano, validadorGeral, validadorMes, validadorAno, validadorDia;

    printf("Informe uma data no formato dd/mm/aaaa:\n");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    fflush(stdin);

    if (mes >= 1 && mes <= 12) {
        validadorMes = 1;
    } else {
        validadorMes = 0;
    }

    if (mes == 2 && dia > 29) {
        validadorDia == 0;
    } else {
        validadorDia = 1;
    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        validadorDia = 0;
    } else {
        validadorDia = 1;
    }

    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia > 31) {
        validadorDia = 0; 
    } else {
        validadorDia = 1;
    }

    if (ano > 0) {
        validadorAno = 1;
    } else {
        validadorAno = 0;
    }

    if (validadorMes == 1 && validadorAno == 1 && validadorDia) {
        validadorGeral = 1;
    }

    if (validadorGeral == 1) {
        printf("Data Valida!\n");
    } else {
        printf("Data Invalida!\n");
    }

    return 0;
}