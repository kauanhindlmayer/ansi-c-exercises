/*
  Faça um programa que leia dois vetores com 10 elementos cada. Gere um terceiro
  vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos 
  intercalados dos dois outros vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[10], vetorB[10], vetorC[20], i;

  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorB[i]);
    fflush(stdin);
  }

  printf("\nVetor C: ");
  for(i = 0; i < 10; i++) {
    vetorC[i] = vetorA[i];
    vetorC[i + 1] = vetorB[i];

    printf("%i, ", vetorC[i]);
    printf("%i, ", vetorC[i + 1]);
  }
  
  return 0;
}