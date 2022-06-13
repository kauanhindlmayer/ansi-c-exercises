/*
  Faça um programa que leia três vetores com 10 elementos cada. Gere um terceiro 
  vetor de 30 elementos, cujos valores deverão ser compostos pelos elementos 
  intercalados dos três outros vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[10], vetorB[10], vetorC[10], vetorD[30], i;

  printf("Entre com os valores do Vetor A\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  printf("Entre com os valores do Vetor B\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorB[i]);
    fflush(stdin);
  }

  printf("Entre com os valores do Vetor C\n ");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorC[i]);
    fflush(stdin);
  }

  printf("\nVetor D: ");
  for(i = 0; i < 10; i++) {
    vetorD[i] = vetorA[i];
    vetorD[i + 1] = vetorB[i];
    vetorD[i + 2] = vetorC[i];

    printf("%i, ", vetorD[i]);
    printf("%i, ", vetorD[i + 1]);
    printf("%i, ", vetorD[i + 2]);
  }
  
  return 0;
}