/*
  Faça um programa que leia um vetor e um número inteiro. Após multiplique todos 
  os elementos do vetor pelo número informado. Imprima os resultados.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       3

int main(void) {

  int vetor[tam], k, i;

  printf("Digite um numero inteiro: ");
  scanf("%i", &k);
  fflush(stdin);

  for(i = 0; i < tam; i++) {
    printf("Digite o elemento %i: ", i  + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);

    vetor[i] = vetor[i] * k;
  }

  printf("\nVetor multiplicado: ");
  for(i = 0; i < tam; i++) {
    printf("%i, ", vetor[i]);
  }

  return 0;
}