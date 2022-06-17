/*
  Faça um programa que leia o preço de 10 produtos e armazene em um vetor. 
  Faça uma função para ler, outra para ordenar ( em ordem de preço ) e outra 
  para mostrar os dados.(sem passagem de parâmetros)
*/

#include <stdio.h>
#include <stdlib.h>

void recebePrecos(void) {
  int i, precos[10];

  for(i = 0; i < 10; i++) {
    printf("Digite o valor do produto %i: R$");
    scanf("%i", &precos[i]);
    fflush(stdin);
  }
}

int main(void) {

  recebePrecos();
  


  return 0;
}