/*
  Faça um programa que peça um valor e mostre na tela se o valor é positivo
  ou negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero;

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);

  if(numero == 0) {
    printf("\nO numero %i e neutro.", numero);
  } else if (numero > 0) {
    printf("\nO numero %i e positivo.", numero);
  } else {
    printf("\nO numero %i e negativo.", numero);
  }

  return 0;
}