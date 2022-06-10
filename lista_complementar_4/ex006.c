/*
  Faça um programa que peça as quatro notas de 10 alunos, calcule e armazene 
  num vetor a média de cada aluno, imprima o número de alunos com média maior 
  ou igual a 7.0.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam      2

int main(void) {
 
  float notas[tam][4], media[tam], soma;
  int aprovados = 0;

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < 4; j++) {
      printf("Digite a nota %i: ", i + 1);
      scanf("%f", &notas[i][j]);
      fflush(stdin);

      soma += notas[i][j];
    }

    media[i] = soma / 4;

    soma = 0;

    if(media[i] >= 7) {
      aprovados++;
    }
  }

  printf("\nAlunos aprovados: %i", aprovados);

  return 0;
}