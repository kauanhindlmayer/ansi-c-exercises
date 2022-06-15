/*
  17. Faça um programa que leia dois vetores  A[5] e B[10] e depois:
    a. gere e mostre o vetor C correspondente a união de dos vetores A e B.
    b. gere e mostre o vetor D com elementos em A que não estão em B.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[5], vetorB[10], vetorC[15], vetorD[15], flag, i, j;

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

    for(j = 0; j < 5; j++) {
      if(vetorA[j] == vetorB[i]) {
        flag = 1;
      } else {
        flag = 0;
      }

      if(flag == 0) {
        vetorD[i] = vetorA[i];
      }
    }
  }

  printf("\nVetor C: ");
  for(i = 0; i < 15; i++) {
    printf("%i, ", vetorC[i]);
  }


  printf("\nVetor D: ");
  for(i = 0; i < 15; i++) {
    printf("%i, ", vetorD[i]);
  }

  return 0;
}