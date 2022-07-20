/*
  Construa  um  algoritmo  que  leia  duas  matrizes  3x3  e  gere  uma  terceira  
  matriz com a soma dos elementos correspondentes de a e b.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam      3

int main(void) {

  int vetorA[tam][tam], vetorB[tam][tam], vetorC[tam][tam], i, j;

  printf("Entre com os valores da Matriz A\n");
  for(i = 0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
      printf("Digite o valor A[%i][%i]: ", i, j);
      scanf("%i", &vetorA[i][j]);
      fflush(stdin);
    }
  }

  printf("\nEntre com os valores da Matriz B\n");
  for(i = 0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
      printf("Digite o valor B[%i][%i]: ", i, j);
      scanf("%i", &vetorB[i][j]);
      fflush(stdin);

      vetorC[i][j] = vetorA[i][j] + vetorB[i][j];
    }
  }

  printf("\nMatriz C");
  for(i = 0; i < tam; i++) {
    printf("\n");
    for(j = 0; j < tam; j++) {
      printf("%i  ", vetorC[i][j]);
    }
  }

  return 0;
}
