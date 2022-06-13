/*
  Faça um programa que leia três vetores com 10 elementos cada. Gere um terceiro 
  vetor de 30 elementos, cujos valores deverão ser compostos pelos elementos 
  intercalados dos três outros vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[10], vetorB[10], vetorC[10], vetorD[30];

  printf("Entre com os valores do Vetor A\n");
  for(int i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  printf("Entre com os valores do Vetor B\n");
  for(int j = 0; j < 10; j++) {
    printf("Digite o elemento %i: ", j + 1);
    scanf("%i", &vetorB[j]);
    fflush(stdin);
  }

  printf("Entre com os valores do Vetor C\n ");
  for(int l = 0; l < 10; l++) {
    printf("Digite o elemento %i: ", l + 1);
    scanf("%i", &vetorC[l]);
    fflush(stdin);
  }

  printf("\nVetor D: ");
  for(int k = 0; k < 10; k++) {
    vetorD[k] = vetorA[k];
    vetorD[k + 1] = vetorB[k];
    vetorD[k + 2] = vetorC[k];

    printf("%i, ", vetorD[k]);
    printf("%i, ", vetorD[k + 1]);
    printf("%i, ", vetorD[k + 2]);
  }
  
  return 0;
}