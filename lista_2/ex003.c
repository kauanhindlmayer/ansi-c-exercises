/*
  Faça um programa que peça um número e imprima se o número é par ou ímpar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero;

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);
  
  if(numero % 2 == 0) {
    printf("\nO numero %i e par.", numero);
  } else {
    printf("\nO numero %i e impar.", numero);
  }

  return 0;
}