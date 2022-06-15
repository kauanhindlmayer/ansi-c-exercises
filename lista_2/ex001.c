/*
  Faça um programa que peça dois números e imprima o maior deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2;

  printf("Digite um numero: ");
  scanf("%i", &num1);
  fflush(stdin);

  printf("Digite outro numero: ");
  scanf("%i", &num2);
  fflush(stdin);

  if(num1 == num2) {
    printf("\nOs dois numeros sao iguais.");
  }
  if(num1 > num2) {
    printf("\nO numero %i e o maior.", num1);
  }
  if(num2 > num1) {
    printf("\nO numero %i e o maior.", num2);
  }

  return 0;
}