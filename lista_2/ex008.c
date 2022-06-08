/*
  Faça um programa que leia 3 valores inteiros e  exiba-os em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2, num3;

  printf("Digite um numero: ");
  scanf("%i", &num1);
  fflush(stdin);

  printf("\nDigite um numero: ");
  scanf("%i", &num2);
  fflush(stdin);

  printf("\nDigite um numero: ");
  scanf("%i", &num3);
  fflush(stdin);

  if (num1 > num2) {   
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }

  if (num1 > num3) {
    num1 = num1 + num3;
    num3 = num1 - num3;
    num1 = num1 - num3;
  }

  if (num2 > num3) {
    num2 = num2 + num3;
    num3 = num2 - num3;
    num2 = num2 - num3;
  }

  printf("\nOrdem crescente: %i, %i, %i.", num1, num2, num3);

  return 0;
}