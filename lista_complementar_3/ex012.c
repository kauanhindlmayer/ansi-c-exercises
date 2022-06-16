/*
  Faça um programa que mostre a soma desta serie S = 1/1 + 3/2 + 5/3 + 7/4 + 
  ... + 99/50.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float numerador = 1, soma = 0, denominador;

  for (denominador = 1; denominador <= 50; denominador++, numerador += 2) {
    soma += (numerador / denominador);
    printf("S = %.1f / %.1f\n", numerador, denominador); 
  }

  printf("\nA soma equivale a %.1f", soma);

	return 0;
} 