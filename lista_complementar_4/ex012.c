/*
  Faça um programa que leia um vetor A com 10 elementos, calcule e mostre a 
  soma dos quadrados dos elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[10], soma = 0, i;

  for(i = 0; i <  10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);

    vetorA[i] = vetorA[i] * vetorA[i];
    soma += vetorA[i];
  }

  printf("\nSoma dos quadrado equivale %i.", soma);
  
  return 0;
}