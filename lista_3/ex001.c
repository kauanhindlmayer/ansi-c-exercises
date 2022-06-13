/*
  Faça um programa que peça dois números inteiros e gere os números inteiros 
  que estão no intervalo entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int num1, num2, i;

  printf("Digite um numero: ");
  scanf("%i", &num1);
  fflush(stdin);

  printf("Digite outro numero: ");
  scanf("%i", &num2);
  fflush(stdin);

  printf("\nValores inteiros no intervalo de %i e %i: ", num1, num2);

  for(i = num1 + 1; i < num2; i++) {
    printf("%i, ", i);
  }

  return 0;
}