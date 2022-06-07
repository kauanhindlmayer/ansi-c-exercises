/*
  Faça um programa que leia 4 notas, mostre as notas e a média na tela.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float notas[4], soma;

  for(int i = 0; i < 4; i++) {
    printf("Digite a sua nota: ");
    scanf("%f", &notas[i]);
    fflush(stdin);
  }

  for(int i = 0; i < 4; i++) {
    printf("%f, ", notas[i]);

    soma += notas[i];
  }

  printf("\nMedia: %f", soma / 4);

  return 0;
}