/*
20. Faça um programa que peça uma data no formato dd/mm/aaaa e 
determine se a mesma é uma data válida. Consistências: 
Ano maior que zero. Mês entre 1 e 12. Meses com 30 e 31 dias. 
Mês com 28 ou 29 dias.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int dia, mes, ano;

    printf("Informe uma data no formato dd/mm/aaaa:\n");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    fflush(stdin);

    
    if (dia >= 28 && dia <= 31 && mes >= 0 && mes <= 12 && ano > 0) {
        printf("Data Valida!");
    } else {
        printf("Data Invalida!");
    }

    return 0;
}