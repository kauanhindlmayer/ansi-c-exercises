/*
  Construa  um  algoritmo  que  leia  duas  matrizes  tamxtam  e  gere  uma  terceira  
  matriz com a soma dos elementos correspondentes de a e b.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       3

int main(void) {

  int vetor1[tam][tam], vetor2[tam][tam], vetortam[tam][tam], i, j;


  printf("Dados da Matriz A:\n");
  for(i = 0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
      printf("A[%i][%i]: ", i, j);
      scanf("%i", &vetor1[i][j]);
      fflush(stdin);
    }
  }

  printf("\nDados da Matriz B:\n");
  for(i = 0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
      printf("B[%i][%i]: ", i, j);
      scanf("%i", &vetor2[i][j]);
      fflush(stdin);
    }
  }

  for(i = 0; i < tam; i++) {
    printf("\n");
    for(j = 0; j < tam; j++) {
      vetortam[i][j] = vetor1[i][j] + vetor2[i][j];
      printf("%i\t", vetortam[i][j]);
    }
  }

  return 0;
}