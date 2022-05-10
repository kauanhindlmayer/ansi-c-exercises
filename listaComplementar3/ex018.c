/*
Um número primo é aquele que é divisível somente por ele mesmo e por 1. 
Faça um programa que peça um número e informe se o número é ou não primo
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  verificaPrimo();
  
	return 0;
} 

void verificaPrimo() {
  int verificador = 0, numero;

  printf("Digite um numero:\n");
  scanf("%i", &numero);
  fflush(stdin);

  for(int i = 2; i < numero; i++) {
    if(numero % i == 0) {
      verificador = 0;
    } else {
      verificador = 1;
    }
  }

  return (verificador == 1) ? printf("O numero %i e PRIMO!\n", numero) : printf("O numero %i NAO e primo!\n", numero);
}
