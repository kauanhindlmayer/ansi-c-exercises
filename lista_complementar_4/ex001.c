/*
  Faça um programa que leia um vetor de 5 números inteiros e mostre-os.  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int vetor[5], i;

  for(i = 0; i < 5; i++) {
    printf("Digite um numero: ");
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }
  
  for(i = 0; i < 5; i++) {
    printf("%d, ", vetor[i]);
  }

	return 0;
}
