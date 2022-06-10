/*
  Construa um algoritmo que leia duas matrizes 5x5 e gere uma  
  terceira matriz com a subtração dos elementos correspondentes de a e b.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       3

int main(void) {

  int vetor1[tam][tam], vetor2[tam][tam], vetor3[tam][tam];

  printf("Entre com os valores do primeiro vetor\n");
  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      printf("Elemento %i: ", i + 1);
      scanf("%i", &vetor1[i][j]);
      fflush(stdin);
    }
  }

  printf("Entre com os valores do segundo vetor\n");
  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      printf("Elemento %i: ", i + 1);
      scanf("%i\t", &vetor2[i][j]);
      fflush(stdin);
    }
  }

  for(int i = 0; i < tam; i++) {
    printf("\n");
    for(int j = 0; j < tam; j++) {
      vetor3[i][j] = vetor1[i][j] - vetor2[i][j];
      printf("%i ", vetor3[i][j]);
    }
  }

  return 0;
}