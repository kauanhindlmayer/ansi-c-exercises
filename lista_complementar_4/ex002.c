/*
  Faça um programa que leia um vetor de 5 números inteiros e mostre a soma, a 
  multiplicação e os números.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int num, vetor[5], soma = 0, multiplicacao = 1, i;

  for(i = 0; i < 5; i++) {
    printf("Digite um numero: ");
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }

  printf("\n");

  for(i = 0; i < 5; i++) {
    printf("%i, ", vetor[i]);
  }

  for(i = 0; i < 5; i++) {
    soma += vetor[i];
  }

  for(i = 0; i < 5; i++) {
    multiplicacao *= vetor[i];
  }

  printf("\nSoma: %i", soma);
  printf("\nMultiplicacao: %i", multiplicacao);
  
  return 0;
}