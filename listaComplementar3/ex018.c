/*
Um número primo é aquele que é divisível somente por ele mesmo e por 1. 
Faça um programa que peça um número e informe se o número é ou não primo
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  int teste, num1;
  
  printf("Digite um numero:\n");
  scanf("%i", &num1);
  fflush(stdin);

  verificaPrimo(num1);
  
	return 0;
} 

int verificaPrimo(num1) {
  int verificador = 0;

  for(int i = 2; i < num1 / 2; i++) {
    if(num1 % i == 0) {
      verificador = 0;
    } else {
      verificador = 1;
    }
  }

  return (verificador == 1) ? printf("O numero %i e PRIMO!\n", num1) : printf("O numero %i NAO e primo!\n", num1);
}
