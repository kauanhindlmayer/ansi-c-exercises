/*
  Faça um programa que peça dois números inteiros (base e expoente), calcule e 
  mostre o primeiro número elevado ao segundo número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

  int base, expoente, i;

  printf("Digite um numero: ");
  scanf("%i", &base);
  fflush(stdin);

  printf("Digite outro numero: ");
  scanf("%i", &expoente);
  fflush(stdin);

  int res = base;

  for (i = 1; i < expoente; i++) {
    res *= base;
  }

  printf("\n%i elevado a %i equivale a %i!\n", base, expoente, res);
    
	return 0;
}