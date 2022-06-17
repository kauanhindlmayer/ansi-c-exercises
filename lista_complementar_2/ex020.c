/*
	Faça um programa que peça uma data no formato dd/mm/aaaa e determine se a 
	mesma é uma data válida. Consistências: Ano maior que zero. Mês entre 1 e 12. 
	Meses com 30 e 31 dias. Mês com 28 ou 29 dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include "../lista_complementar_5/libs/validadata.h"

int main(void) {

  int dia, mes, ano, res;

  printf("Digite uma data (dd/mm/yy): ");
  scanf("%i/%i/%i", &dia, &mes, &ano);
  fflush(stdin);

  res = validaData(dia, mes, ano);

  res == 0 ? printf("\nData invalida!") : printf("\nData valida!");

  return 0;
}