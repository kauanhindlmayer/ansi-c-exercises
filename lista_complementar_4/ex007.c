/*
  Faça um programa que peça a idade e a altura de 5 pessoas, armazene cada 
  informação no seu respectivo vetor. Imprima à idade e a altura na ordem 
  inversa a ordem lida.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int idade[5], i;
  float altura[5];

  for(i = 0; i < 5; i++) {
    printf("\nEntre com os dados da pessoa %i\n", i +  1);
    printf("Digite sua idade: ");
    scanf("%i", &idade[i]);
    fflush(stdin);

    printf("Digite sua altura: ");
    scanf("%f", &altura[i]);
    fflush(stdin);
  }

  printf("\nOrdem inversa: ");
  for(i = 4; i >= 0; i--) {
    printf("\nPessoa %i: %i anos - %.1fm", i + 1, idade[i], altura[i]);
  }
  
  return 0;
}