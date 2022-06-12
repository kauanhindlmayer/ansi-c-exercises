/*
  Faça um programa que leia dois vetores com 10 elementos cada. Gere um terceiro
  vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos 
  intercalados dos dois outros vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[10], vetorB[10], vetorC[20];

  for(int i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  for(int j = 0; j < 10; j++) {
    printf("Digite o elemento %i: ", j + 1);
    scanf("%i", &vetorB[j]);
    fflush(stdin);
  }

  printf("\nVetor C: ");
  for(int k = 0; k < 10; k++) {
    vetorC[k] = vetorA[k];
    vetorC[k + 1] = vetorB[k];

    printf("%i, ", vetorC[k]);
    printf("%i, ", vetorC[k + 1]);
  }
  
  return 0;
}