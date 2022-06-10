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

  printf("\nNotas: ");

  for(int i = 0; i < 4; i++) {
    printf("%.1f, ", notas[i]);
    soma += notas[i];
  }

  printf("\nMedia: %.1f", soma / 4);

  return 0;
}