/*
  Faça um programa que leia um número, passe este número como parâmetro para 
  uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
*/

#include <stdio.h>
#include <stdlib.h>

int verificaNumero(int numero); // Protótipo

int main(void) {

  int numero, res;

  printf("\nDigite um numero: "); // 5
  scanf("%i", &numero);
  fflush(stdin);

  res = verificaNumero(numero); // res = 1

  res == 0 ? printf("\nPAR") : printf("\nIMPAR");

  return 0;
}

int verificaNumero(int numero) {
  int retorno;

  if(numero % 2 == 0) {
    retorno = 0;
  } else {
    retorno = 1;
  }

  return retorno;
}

