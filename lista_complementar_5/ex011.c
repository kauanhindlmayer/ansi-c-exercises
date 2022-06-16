/*
  Faça uma função  que  calcule a média de uma seqüência de valores, os valores 
  deverão ser passados por meio de um  vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void calculaMedia() {

  int quantidade, vetor[quantidade], i, soma = 0;

  printf("Digite a quantidade de valores: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  for(i = 0; i < quantidade; i++) {
    printf("Digite o valor %i: ", i + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);

    soma += vetor[i];
  }

  printf("\nMedia dos valores: %i", soma / quantidade);
}

int main(void) {

  calculaMedia();
  
  return 0;
}