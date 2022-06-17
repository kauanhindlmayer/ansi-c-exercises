/*
  Faça um programa que receba como parâmetros a linha, a coluna e uma mensagem. 
  Escreva esta mensagem na linha e coluna fornecida. 
*/

#include <stdio.h>
#include <stdlib.h>

void escreveMensagem(int linhas, int colunas, char mensagem[]) {
  int i;

  for(i = 0; i < linhas - 1; i++) {
    printf("\n");
  }

  for(i = 0; i < colunas - 1; i++) {
    printf("  ");
  }
  
  printf("%s", mensagem);
}

int main(void) {

  int linhas, colunas;
  char mensagem[200];

  printf("Digite o numero da linha: ");
  scanf("%i", &linhas);
  fflush(stdin);

  printf("Digite o numero da coluna: ");
  scanf("%i", &colunas);
  fflush(stdin);

  printf("Digite uma mensagem: ");
  scanf("%s", &mensagem);
  fflush(stdin);

  escreveMensagem(linhas, colunas, mensagem);
  
  return 0;
}