/*
  Faça um programa que calcule e mostre a média bimestral da turma. 
  O usuário deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int media, nota, quantidade, soma = 0;

  printf("Informe a quantidade de notas: \n");
  scanf("%i", &quantidade);
  fflush(stdin);

  for (int i = 1; i <= quantidade; i++) {
    printf("Informe a nota: \n ");
    scanf("%i", &nota);
    fflush(stdin);

    soma += nota;
  }

  media = soma / quantidade;

  printf("A media bimestral da turma equivale a %i\n", media);

  return 0;
}