/*
  Faça um programa que mostre a soma desta serie S= 1/1 + 2/3 + 3/5+ 
  4/7+5/9+..+10/19.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float denominador = 1, soma = 0, numerador;
  
  for (numerador = 1; numerador <= 10; numerador++, denominador += 2) {
    soma += (numerador / denominador);
    printf("S = %.1f / %.1f\n", numerador, denominador); 
  }

  printf("\nA soma equivale a %.1f", soma);

	return 0;
} 