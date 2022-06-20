/*
  Faça um programa que peça o número de alunos de uma sala, peça para cada 
  aluno sua idade, altura e sexo. Calcule e imprima:
    a. A maior e a menor altura da turma;
    b. A média de altura das mulheres;
    c. A média de altura dos homens;
    d. A média de idade da turma..
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int tam, i, soma = 0, maior = 0, menor = 0;

  printf("Digite a quantidade de alunos: ");
  scanf("%i", &tam);
  fflush(stdin);

  int idade[tam], altura[tam];
  char sexo[tam];

  printf("\n");
  for(i = 0; i < tam; i++) {
    printf("Digite a idade do aluno %i: ", i + 1);
    scanf("%i", &idade[i]);
    fflush(stdin);

    soma += idade[i];
  }

  printf("\n");
  for(i = 0; i < tam; i++) {
    printf("Digite a altura do aluno %i: ", i + 1);
    scanf("%i", &altura[i]);
    fflush(stdin);
  }

  printf("\n");
  for(i = 0; i < tam; i++) {
    printf("Digite o sexo do aluno %i (M - masculino, F - feminino): ", i + 1);
    scanf("%c", &sexo[i]);
    fflush(stdin);
  }

  maior = altura[0];
  menor = altura[0];

  for(i = 0; i < tam; i++) {
    if(altura[i] > maior) maior = altura[i];
    if(altura[i] < menor) menor = altura[i];
  }

  printf("\nMaior altura: %i", maior);
  printf("\nMenor altura: %i", menor);
  // printf("\nMedia de altura das mulheres: %i",);
  // printf("\nMedia de altura dos homens: %i",);
  printf("\nMedia de idade: %i", soma / tam);

  return 0;
}