/*
  Faça um programa que peça o número de alunos de uma sala, peça para cada 
  aluno sua idade, altura e sexo. Calcule e imprima:
    a. A maior e a menor altura da turma;
    b. A média de altura das Mulheres;
    c. A média de altura dos Homens;
    d. A média de idade da turma..
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int tam, i, soma = 0;;
  float maior = 0, menor = 0, somaM = 0, somaF = 0, quantidadeM = 0, quantidadeF = 0;

  printf("Digite a quantidade de alunos: ");
  scanf("%i", &tam);
  fflush(stdin);

  int idade[tam];
  float altura[tam];
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
    scanf("%f", &altura[i]);
    fflush(stdin);
  }

  printf("\n");
  for(i = 0; i < tam; i++) {
    printf("Digite o sexo do aluno %i (M - masculino, F - feminino): ", i + 1);
    scanf("%s", &sexo[i]);
    fflush(stdin);

    if(sexo[i] == 'M' || sexo[i] == 'm') {
      somaM += altura[i];
      quantidadeM++;
    }
    if(sexo[i] == 'F' || sexo[i] == 'f') {
      somaF += altura[i];
      quantidadeF++;
    }
  }

  maior = altura[0];
  menor = altura[0];

  for(i = 0; i < tam; i++) {
    if(altura[i] > maior) maior = altura[i];
    if(altura[i] < menor) menor = altura[i];
  }

  float media = soma / tam;
  float mediaAlturaM = somaM / quantidadeM;
  float mediaAlturaF = somaF / quantidadeF;

  printf("\nMaior Altura: %.2f", maior);
  printf("\nMenor Altura: %.2f", menor);
  printf("\nMedia de altura das Mulheres: %.2f", mediaAlturaF);
  printf("\nMedia de altura dos Homens: %.2f", mediaAlturaM);
  printf("\nMedia de Idade: %.2f", media);

  return 0;
}