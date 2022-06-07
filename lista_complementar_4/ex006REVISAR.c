/*
  Faça um programa que peça as quatro notas de 10 alunos, calcule e 
  armazene num vetor a média de cada aluno, imprima o número de alunos 
  com média maior ou igual a 7.0.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
  float notas[10][4], media[10], soma;
  int numero = 0;

  for(int i = 0; i < 10; i++) {
    
    for(int j = 0; j < 4; j++) {
      printf("\nDigite a nota %i: ", i);
      scanf("%f", &notas[i][j]);
      fflush(stdin);

      soma += j;
    }

    media[i] = soma / 4;
  }

  for(int i = 0; i < 10; i++) {
    if(media[i] >= 7) {
      numero++;
    }
  }

  printf("\nAlunos aprovados: %i");

  return 0;
}