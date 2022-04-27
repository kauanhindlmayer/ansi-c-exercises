/*
Faça um programa que calcule o valor total investido e o custo médio por CD. 
O usuário deverá informar a quantidade de CDs e o valor para em cada um.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int media, valor, quantidade, soma = 0;

  printf("Informe a quantidade de CD's: \n");
  scanf("%i", &quantidade);
  fflush(stdin);

  for (int i = 1; i <= quantidade; i++) {
    printf("Informe o valor do CD %i: \n ", i);
    scanf("%i", &valor);
    fflush(stdin);

    soma += valor;
  }

  media = soma / quantidade;

  printf("------------------------------\n");
  printf("Valor total investido:\tR$%i\nCusto medio por CD:\tR$%i\n", soma, media);
  printf("------------------------------\n");

  return 0;
}
