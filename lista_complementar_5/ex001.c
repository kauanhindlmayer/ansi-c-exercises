/*
  Faça um programa que leia um número, passe este número como parâmetro para 
  uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
*/

int parImpar(int x) {
  if(x % 2 == 0) {
    return 0;
  } else {
    return 1;
  }
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int x, res;

  printf("Digite um numero: ");
  scanf("%i", &x);
  fflush(stdin);

  res = parImpar(x);
  res == 0 ? printf("\nO numero %i e PAR.", x) : printf("\nO numero %i e IMPAR.", x);

  return 0;
}