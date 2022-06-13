/*
  Faça um programa que calcule e mostre  a média  bimestral da turma. O usuário 
  deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int quantidade, nota, soma = 0, i;

  printf("Digite a quantidade de notas: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  for(i = 0; i < quantidade; i++) {
    printf("Digite a nota %i: ", i + 1);
    scanf("%i", &nota);
    fflush(stdin);

    soma += nota;
  }

  printf("\nMedia bimestral: %i", soma / quantidade);
  
  return 0;
}