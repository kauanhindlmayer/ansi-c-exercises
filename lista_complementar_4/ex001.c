/*
  Faça um programa que leia um vetor de 5 números inteiros e mostre-os.  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int num, vetor[5];

  for(int i = 0; i < 5; i++) {
    printf("Digite um numero: ");
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }
  
  for(int c = 0; c < 5; c++) {
    printf("%d, ", vetor[c]);
  }

	return 0;
}
