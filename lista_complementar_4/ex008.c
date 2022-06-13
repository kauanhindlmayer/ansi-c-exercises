/*
  Faça um programa que peça a matricula de dez alunos e armazene num vetor. 
  Peça também as quatro notas desses 10 alunos, calcule e armazene em outro 
  vetor a média de cada aluno. Imprima a matricula de cada aluno seguido de sua média.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam      2

int main(void) {
 
  float notas[tam][4], media[tam], soma;
  int matriculas[tam], i, j;

  for(i = 0; i < tam; i++) {
    printf("Digite a matricula do aluno %i: ", i + 1);
    scanf("%i", &matriculas[i]);
    fflush(stdin);
  }

  for(i = 0; i < tam; i++) {
    printf("Entre com as notas do aluno %i\n", i + 1);

    for(j = 0; j < 4; j++) {
      printf("Digite a nota %i: ", j + 1);
      scanf("%f", &notas[i][j]);
      fflush(stdin);

      soma += notas[i][j];
    }

    media[i] = soma / 4;

    soma = 0;
  }

  printf("\nAluno:\tMatricula:\tMedia:");

  for(i = 0; i < tam; i++) {
    printf("\n%i\t%i\t\t%.1f", i + 1, matriculas[i], media[i]);
  }

  return 0;
}