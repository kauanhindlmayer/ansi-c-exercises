/*
  Faça um programa que peça um número e informe se o número é inteiro ou quebrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero;

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);

  if(num1 == (int)num1) {
    printf("\nO numero %i e inteiro.", numero);
  } else {
    printf("\nO numero %i e quebrado.", numero);
  }

  return 0;
}