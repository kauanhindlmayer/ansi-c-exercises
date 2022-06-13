/*
  Construa um algoritmo que leia um vetor de 10 números inteiros  e mostre a 
  soma dos números.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetor[10], soma = 0, i;

  for(i = 0; i < 10; i++) {
    printf("Digite o numero %i: ", i + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);

    soma += vetor[i];
  }

  printf("\nSoma: %i", soma);

  return 0;
}