/*
  Faça um programa que peça um número e se este número for par, transforme-o em 
  ímpar e vice-versa.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero;

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);

  if(numero % 2 == 0) {
    printf("\nTransformado em impar: %i", numero + 1);
  } else {
    printf("\nTransformado em par: %i", numero + 1);
  }

  return 0;
}