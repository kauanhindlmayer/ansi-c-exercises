/*
  Faça um programa que peça para n pessoas a sua idade, ao final o 
  programa devera verificar se a média de idade da turma varia entre 
  0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, 
  adulta ou idosa, conforme a média calculada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero, idade, total = 0;

  printf("Digite o numero de pessoas: ");
  scanf("%i", &numero);
  fflush(stdin);

  for(int i = 1; i <= numero; i++) {
    printf("Digite a idade da pessoa %i: ", i);
    scanf("%i", &idade);
    fflush(stdin);

    total += idade;
  }

  float media = total / numero;

  if(media <= 25) {
    printf("[%.1f] Turma jovem!", media);
  } else if (media <= 60) {
    printf("[%.1f] Turma adulta!", media);
  } else {
    printf("[%.1f] Turma idosa!", media);
  }

  return 0;
}