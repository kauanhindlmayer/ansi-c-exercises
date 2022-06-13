/*
  Faça um programa que mostre a soma desta serie S = (37*38)/1 + (36*37)/2 + 
  (35*36)/3 + ... + (1*2)/37.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float soma = 0, num1 = 37, num2 = 38;
  int i;

  printf("------------------------------\n");

  for (i = 1; i <= 37; i++) {
    soma += (num1 * num2 / i);
    printf("%0.1f\n", soma); 
    num1--;
    num2--;
  }

  printf("------------------------------\nA soma equivale a %.1f\n", soma);

	return 0;
} 