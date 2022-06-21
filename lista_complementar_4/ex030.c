/*
  Para um aluno ser considerado aprovado em uma determinada disciplina, é
  necessário que ele possua nota igual ou superior à média da turma. 
  Sabendo que a turma é composta por 15 alunos e que para cada aluno anotou-se 
  o seu nome e a sua nota, faça um programa para informar o nome dos alunos 
  aprovados.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       15

typedef struct {
  char nome[100];
  float nota;
} Aluno;

int main(void) {

  int i;
  float soma = 0, media;
  Aluno alunos[tam];

  for(int i = 0; i < tam; i++) {
    printf("\nDigite o nome do aluno %i: ", i + 1);
    scanf("%s", &alunos[i].nome);
    fflush(stdin);

    printf("Digite a nota do aluno %i: ", i + 1);
    scanf("%f", &alunos[i].nota);
    fflush(stdin);

    soma += alunos[i].nota;
  }

  media = soma / tam;

  printf("\nLista de Aprovados: ");
  for(i = 0; i < tam; i++) {
    if(alunos[i].nota >= media) printf("\n%i. %s", i + 1, alunos[i].nome);
  }

  return 0;
}