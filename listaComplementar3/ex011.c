/*
Faça um programa que mostre a soma desta serie S= 1/1 + 2/3 + 3/5+ 
4/7+5/9+..+10/19.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  float soma = (1/2);

  for (int i = 1; i < 10; i++) {
    soma += (i / (2 * i));
  }

  
	return 0;
} 