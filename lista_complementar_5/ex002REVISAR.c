/*
  Escreva uma função que receba como argumento o ano e retorne 1 se for ano 
  bissexto ou 0 se não for um ano bissexto.
*/

#include <stdio.h>
#include <stdlib.h>

int verificaAno(int ano) {
  
}

int main(void) {

  int ano, res;

  printf("Digite um ano: ");
  scanf("%i", &ano);
  fflush(stdin);

  res = verificaAno(ano);

  res == 1 ? printf("Ano bissexto") : printf("Ano nao bissexto");

  return 0;
}