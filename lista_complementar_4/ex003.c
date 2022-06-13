/*
  Faça um programa que leia um vetor de 10 números reais e mostre-os na ordem 
  inversa.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  float num, vetor[10];
  int i;

  for(i = 0; i < 10; i++) {
    printf("Digite o numero %i: ", i + 1);
    scanf("%f", &vetor[i]);
    fflush(stdin);
  }

  printf("\nOrdem inversa: ");

  for(i = 9; i >= 0; i--) {
    printf("%.1f, ", vetor[i]);
  }

  return 0;
}