/*
Faça um programa que calcule o número médio de alunos por turma. 
Para isto, peça a quantidade de turmas e a quantidade de alunos para 
cada turma. As turmas não podem ter mais de 40 alunos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int turmas, alunos, media, soma = 0;

  printf("Digite a quantidade de turmas: \n");
  scanf("%i", &turmas);
  fflush(stdin);

  for (int i = 1; i <= turmas; i++) {
    printf("Digite a quantidade de alunos da turma %i: \n", i);
    scanf("%i", &alunos);
    fflush(stdin);

    if (alunos > 40) {
      return printf("Quantidade invalida, as turmas não podem ter mais de 40 alunos!\n");
    }

    soma += alunos;
  }

  media = soma / turmas;

  printf("A quantidade media de alunos por turma equivale a %i\n", media);

  return 0;
}