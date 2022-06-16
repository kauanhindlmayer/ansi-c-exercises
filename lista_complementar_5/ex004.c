/*
  Faça um programa que tenha uma função que desenhe um retângulo usando os 
  caracteres ‘+’ , ‘-’  e ‘| ‘. A função receberá a quantidade de linhas (<24) 
  e a quantidade de colunas (<79) para imprimir o retângulo na tela.

*/

#include <stdio.h>
#include <stdlib.h>

void desenhaRetangulo(int linhas, int colunas) {
  int i, j;

  printf("\n+");
  for(i = 0; i < colunas; i++) {
    printf("-");
  }
  printf("+");

  for(i = 0; i < linhas; i++) {
    printf("\n|");
    for(j = 0; j < colunas; j++) {
      printf(" ");
    }
    printf("|");
  }

  printf("\n+");
  for(i = 0; i < colunas; i++) {
    printf("-");
  }
  printf("+");
}

int main(void) {

  int linhas, colunas;

  printf("Digite a quantidade de linhas: ");
  scanf("%i", &linhas);
  fflush(stdin);

  if(linhas < 0 || linhas > 24) {
    printf("Quantidade invalida!");
    return 0;
  }

  printf("Digite a quantidade de colunas: ");
  scanf("%i", &colunas);
  fflush(stdin);

  if(colunas < 0 || colunas > 79) {
    printf("Quantidade invalida!");
    return 0;
  }

  desenhaRetangulo(linhas, colunas);

  return 0;
}