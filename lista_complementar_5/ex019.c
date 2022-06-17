/*
  Escreva uma função que receba  como argumentos o dia, o mês e o ano e retorne  
  1 se a data for válida ou 0 se for uma data inválida. Utilize seu programa de 
  consistência de data e converta-o em uma função de uma biblioteca própria.
*/

#include <stdio.h>
#include <stdlib.h>
#include "./libs/validadata.h"

int main(void) {

  int dia, mes, ano, res;

  printf("Digite uma data (dd/mm/yy): ");
  scanf("%i/%i/%i", &dia, &mes, &ano);
  fflush(stdin);

  res = validaData(dia, mes, ano);

  res == 0 ? printf("\nData invalida!") : printf("\nData valida!");

  return 0;
}