/*
  Construa  um  algoritmo  que  leia  uma  matriz  quadrada  de  ordem  4.  
  Leia  uma constante K, multiplique a diagonal principal por esta constante 
  e imprima a matriz multiplicada.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       4

int main(void) {

  int vetor[tam][tam], k, vetor2[tam], i, j;

  printf("Dados da Matriz A:\n");
  for(i = 0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
      printf("A[%i][%i]: ", i, j);
      scanf("%i", &vetor[i][j]);
      fflush(stdin);
    }
  }

  printf("\nDigite a constante K: ");
  scanf("%i", &k);
  fflush(stdin);

  for(i = 0; i < tam; i++) {
    vetor[i][i] *= k;
  }

  for(i = 0; i < tam; i++) {
    vetor2[i] = vetor[i][0] * vetor[i][1] * vetor[i][2];
  }

  for(i = 0; i < tam; i++) {
    printf("\n");
    printf("%i\t", vetor2[i]);
  }
  
  return 0;
}