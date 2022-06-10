/*
  Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3.  
  Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  
  e  imprima  a  matriz multiplicada.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       3

int main(void) {

  int vetor[tam][tam], k, vetor2[tam];

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      printf("Entre com o elemento %i: ", i + 1);
      scanf("%i", &vetor[i][j]);
      fflush(stdin);
    }
  }

  printf("Digite a constante K: ");
  scanf("%i", &k);
  fflush(stdin);

  for(int i = 0; i < tam; i++) {
    int j = 0;
    vetor[i][j] = vetor[i][j] - k;
    j++;
  }

  for(int i = 0; i < tam; i++) {
    vetor2[i] = vetor[i][0] * vetor[i][1] * vetor[i][2];
  }

  for(int i = 0; i < tam; i++) {
    printf("\n");
    printf("%i\t", vetor2[i]);
  }
  
  return 0;
}