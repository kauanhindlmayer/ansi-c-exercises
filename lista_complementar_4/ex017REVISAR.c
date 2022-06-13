/*
  17. Faça um programa que leia dois vetores  A[5] e B[10] e depois:
    a. gere e mostre o vetor C correspondente a união de dos vetores A e B.
    b. gere e mostre o vetor D com elementos em A que não estão em B.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[5], vetorB[10], vetorC[15], vetorD[15], acumulador;

  printf("Entre com os elementos do vetor A\n");
  for(int i = 0; i < 5; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);

    vetorC[i] = vetorA[i];
  }

  printf("Entre com os elementos do vetor B\n");
  for(int j = 0; j < 10; j++) {
    printf("Digite o elemento %i: ", j + 1);
    scanf("%i", &vetorB[j]);
    fflush(stdin);

    vetorC[5 + j] = vetorB[j];

    for(int l = 0; l < 5; l++) {
      if(vetorB[j] != vetorA[l])
    }
  }

  printf("\nVetor C: ");
  for(int k = 0; k < 15; k++) {
    printf("%i, ", vetorC[k]);
  }

  return 0;
}