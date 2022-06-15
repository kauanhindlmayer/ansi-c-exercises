/*
  Faça  uma  função  que  desenhe  linhas  de  caracteres  na  tela,  a  função 
  receberá como argumento o tipo de caractere e o número de linhas que deverá 
  imprimir.
*/

#include <stdio.h>
#include <stdlib.h>

void desenhaLinhas(char tipo, int quantidade) {
  int i, j;

  for(i = 0; i < quantidade; i ++) {
    printf("\n");
    for(j = 0; j < 20; j++) {
      printf("%c", tipo);
    }
  }
}

int main(void) {

  int quantidade;
  char tipo;

  printf("Digite um caractere: ");
  scanf("%c", &tipo);
  fflush(stdin);

  printf("Digite a quantidade de linhas: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  desenhaLinhas(tipo, quantidade);

  return 0;
}