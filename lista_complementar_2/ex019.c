/*
	Faça um programa que peça um número correspondente a um determinado ano e em 
	seguida informe se este ano é ou não bissexto
*/

#include <stdio.h>
#include <stdlib.h>

int verificaAno(int ano) {
  if(ano % 400 == 0) return 1;
  if(ano % 4 == 0 && ano % 100 != 0) {
    return 1;
  } else {
    return 0;
  }
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