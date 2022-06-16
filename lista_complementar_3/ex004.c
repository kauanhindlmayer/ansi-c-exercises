/*
  Faça um programa que calcule e mostre a média bimestral da turma. 
  O usuário deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int media, nota, quantidade, soma = 0, i;

  printf("Informe a quantidade de notas: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  for (i = 1; i <= quantidade; i++) {
    printf("Informe a nota: \n ");
    scanf("%i", &nota);
    fflush(stdin);

    soma += nota;
  }

  media = soma / quantidade;

  printf("\nA media bimestral da turma equivale a %i\n", media);

  return 0;
}