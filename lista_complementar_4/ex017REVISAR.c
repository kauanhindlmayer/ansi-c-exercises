/*
  17. Faça um programa que leia dois vetores  A[5] e B[10] e depois:
    a. gere e mostre o vetor C correspondente a união de dos vetores A e B.
    b. gere e mostre o vetor D com elementos em A que não estão em B.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[5], vetorB[10], vetorC[15], vetorD[15], acumulador, i;

  printf("Entre com os elementos do vetor A\n");
  for(i = 0; i < 5; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);

    vetorC[i] = vetorA[i];
  }

  printf("Entre com os elementos do vetor B\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorB[i]);
    fflush(stdin);

    vetorC[5 + i] = vetorB[i];

    for(i = 0; i < 5; i++) {
      if(vetorB[i] != vetorA[i])
    }
  }

  printf("\nVetor C: ");
  for(i = 0; i < 15; i++) {
    printf("%i, ", vetorC[i]);
  }

  return 0;
}