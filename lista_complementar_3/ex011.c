/*
  Faça um programa que mostre a soma desta serie S= 1/1 + 2/3 + 3/5+ 
  4/7+5/9+..+10/19.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float denominador = 1, soma = 0;
  int i;

  printf("------------------------------\n");
  
  for (i = 1; i <= 10; i++) {
    soma += (i / denominador);
    printf("%0.1f\n", soma); 
    denominador += 2;
  }

  printf("------------------------------\nA soma equivale a %.1f\n", soma);

	return 0;
} 