/*
  Faça um programa que leia um vetor de 10 números reais e mostre-os 
  na ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  float vetor[10];

  for(int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%f", &vetor[i]);
    fflush(stdin);
  }

  for(int i = 9; i >= 0; i--) {
    printf("%.1f, ", vetor[i]);
  }

  return 0;
}