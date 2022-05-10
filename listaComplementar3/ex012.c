/*
  Faça um programa que mostre a soma desta serie S = 1/1 + 3/2 + 5/3 + 7/4 + 
  ... + 99/50.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float numerador = 1, soma = 0;

  printf("------------------------------\n");

  for (int i = 1; i <= 50; i++) {
    soma += (numerador / i);
    printf("%0.1f\n", soma); 
    numerador += 2;
  }

  printf("------------------------------\nA soma equivale a %.1f\n", soma);

	return 0;
} 