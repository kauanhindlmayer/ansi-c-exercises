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

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);

  for(int i = 2; i < numero / 2; i++) {
    if(numero % i == 0) {
      verificador++;
    }

    return (verificador == 0) ? printf("O numero %d e primo!\n", numero) : printf("O numero %d nao e primo!\n", numero);
  }
}
