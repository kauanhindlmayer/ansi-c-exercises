/*
  Faça um programa no qual você possa informar 12 respostas corretas 
  (gabarito) de um vestibular e após isto peça as respostas das 12 questões a 
  um determinado número de alunos. Cada questão admite como resposta um número 
  de 1 a 5. Para cada aluno anotamos o seu nome e as suas 12 respostas. Faça 
  um algoritmo para imprimir o nome e o número de acertos de cada aluno

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int respostas[12];
  float nota;
  char nome[100];
} Aluno;

int main(void) {

  int i, j, tam, gabarito[12];

  for(i = 0; i < 12; i++) {
    printf("Digite o gabarito da questao %i: ", i + 1);
    scanf("%i", &gabarito[i]);
    fflush(stdin);
  }

  printf("\nDigite a quantidade de alunos: ");
  scanf("%i", &tam);
  fflush(stdin);

  Aluno alunos[tam];

  for(i = 0; i < tam; i++) {
    printf("\nDigite o nome do aluno %i: ", i + 1);
    scanf("%s", &alunos[i].nome);
    fflush(stdin);

    for(j = 0; j < 12; j++) {
      printf("Digite a resposta da questao %i: ", j + 1);
      scanf("%i", &alunos[i].respostas[j]);
      fflush(stdin);

      if(alunos[i].respostas[j] == gabarito[i]) alunos[i].nota += 0.833;
    }
  }

  for(i = 0; i < tam; i++) {
    printf("\nAluno:\t%s\nNota:\t%.1f\n", alunos[i].nome, alunos[i].nota);
  }

  return 0;
}