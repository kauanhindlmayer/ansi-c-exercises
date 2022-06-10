/*
  Construa  um  algoritmo  que  leia  duas  matrizes  3x3  e  gere  uma  terceira  
  matriz com a soma dos elementos correspondentes de a e b.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetor1[3][3], vetor2[3][3], vetor3[3][3];


  printf("Entre com os elementos do primeiro vetor\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Elemento %i: ", i + 1);
      scanf("%i", &vetor1[i][j]);
      fflush(stdin);
    }
  }

  printf("Entre com os elementos do segundo vetor\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Elemento %i: ", i + 1);
      scanf("%i", &vetor2[i][j]);
      fflush(stdin);
    }
  }

  for(int i = 0; i < 3; i++) {
    printf("\n");
    for(int j = 0; j < 3; j++) {
      vetor3[i][j] = vetor1[i][j] + vetor2[i][j];
      printf("%i\t", vetor3[i][j]);
    }
  }

  return 0;
}