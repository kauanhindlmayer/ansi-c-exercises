/*
  Faça um programa que mostre a soma desta serie S = (37*38)/1 + (36*37)/2 + 
  (35*36)/3 + ... + (1*2)/37.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float soma = 0, num1 = 37, num2 = 38, i;

  for (i = 1; i <= 37; i++) {
    soma += (num1 * num2 / i);
    printf("S = (%.1f * %.1f)/%.1f\n", num1, num2, i); 
    num1--;
    num2--;
  }

  printf("\nA soma equivale a %.1f", soma);

	return 0;
} 