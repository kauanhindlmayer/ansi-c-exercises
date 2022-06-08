/*
  Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:
    a) A mensagem  "Aprovado",  se  a  média  for  maior  ou  igual  a  7,  com  a  respectiva média alcançada; 
    b) A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada; 
    c) A mensagem "Aprovado com Distinção", se a média for igual a 10. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nota1, nota2, nota3, media;

  printf("Digite a nota 1: ");
  scanf("%i", &nota1);
  fflush(stdin);

  printf("\nDigite a nota 2: ");
  scanf("%i", &nota2);
  fflush(stdin);

  printf("\nDigite a nota 3: ");
  scanf("%i", &nota3);
  fflush(stdin);

  media = (nota1 + nota2 + nota3) / 3;

  if(media == 10) {
    printf("\nAprovado com Distincao!");
  } else if(media >= 7) {
    printf("\nAprovado!");
  } else {
    printf("\nReprovado!");
  }

  return 0;
}