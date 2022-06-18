/*
  Faça um programa no qual você possa informar 12 respostas corretas 
  (gabarito) de um vestibular e após isto peça as respostas das 12 questões a 
  um determinado número de alunos. Cada questão admite como resposta um número 
  de 1 a 5. Para cada aluno anotamos o seu nome e as suas 12 respostas. Faça 
  um algoritmo para imprimir o nome e o número de acertos de cada aluno

*/

#include <stdio.h>
#include <stdlib.h>

#define tam       4

int main(void) {

  int gabarito[tam], i;

  for(i = 0; i < tam; i++) {
    printf("Digite o gabarito da questao %i: ", i + 1);
    scanf("%i", &gabarito[i]);
    fflush(stdin);
  }

  


  return 0;
}