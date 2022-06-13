/*
  Um número primo é aquele que é divisível somente por ele mesmo e por 1. 
  Faça um programa que peça um número e informe se o número é ou não primo
*/
#include <stdio.h>
#include <stdlib.h>

void verificaPrimo () {
  int x, divisores = 0, i; 

  printf("Digite um numero inteiro: ");
  scanf("%i", &x);
  fflush(stdin);

  for(i = 1; i <= x; i++) {
    if(x % i == 0) {
      divisores++;
    }
  }
 
  if(divisores > 2) {
    printf("\nO numero %i nao e Primo.", x);
  } else {
    printf("\nO numero %i e Primo.", x);
  }
}

int main(void){

  verificaPrimo();

	return 0;
}