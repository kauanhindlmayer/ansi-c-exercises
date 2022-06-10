/*
  Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3.  
  Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  
  e  imprima  a  matriz multiplicada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetor[3][3], k, vetor2[3];

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Entre com o elemento %i: ", i + 1);
      scanf("%i", &vetor[i][j]);
      fflush(stdin);
    }
  }

  printf("Digite a constante K: ");
  scanf("%i", &k);
  fflush(stdin);

  for(int i = 0; i < 3; i++) {
    int j = 0;
    vetor[i][j] = vetor[i][j] - k;
    j++;
  }

  for(int i = 0; i < 3; i++) {
    vetor2[i] = vetor[i][0] * vetor[i][1] * vetor[i][2];
  }

  for(int i = 0; i < 3; i++) {
    printf("\n");
    printf("%i ", vetor2[i]);
  }
  
  return 0;
}