/*
  17. Faça um programa que leia dois vetores  A[5] e B[10] e depois:
    a. gere e mostre o vetor C correspondente a união de dos vetores A e B.
    b. gere e mostre o vetor D com elementos em A que não estão em B.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[5], vetorB[10], vetorC[15], i, j, teste, tam = 0;

  printf("Entre com os elementos do vetor A\n");
  for(i = 0; i < 5; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);

    vetorC[i] = vetorA[i];
  }

  printf("\nEntre com os elementos do vetor B\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorB[i]);
    fflush(stdin);

    vetorC[5 + i] = vetorB[i];
  }

  printf("\nVetor C: ");
  for(i = 0; i < 15; i++) {
    printf("%i, ", vetorC[i]);
  }

  for(i = 0; i < 5; i++) {
    teste = 0;

    for(j = 0; j < 10; j++) {
      if(vetorA[i] == vetorB[j]) {
        teste = 1;
      }
    }

    if(teste == 0) {
      tam++;
    }
  }

  int vetorD[tam], k = 0;

  for(i = 0; i < 5; i++) {
    teste = 0;

    for(j = 0; j < 10; j++) {
      if(vetorA[i] == vetorB[j]) {
        teste = 1;
      }
    }

    if(teste == 0) {
      vetorD[k] = vetorA[i];
      k++;
    }
  }

  printf("\nVetor D: ");
  for(i = 0; i < tam; i++) {
    printf("%i, ", vetorD[i]);
  }

  return 0;
}