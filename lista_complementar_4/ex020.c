/*
  Faça um programa que leia 10 números inteiros, armazene num vetor e imprima-os 
  em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       10

int main(void) {

  int vetor[tam], aux, i, j;

  printf("Dados do Vetor A:\n");
  for(i = 0; i < tam; i++) {
    printf("A[%i]: ", i);
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }

  for(j = 0; j < tam; j++) {
    for(i = 0; i < tam - 1; i++) {
      if(vetor[i] > vetor[i + 1]) {
        aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;
      }
    }
  }

  printf("\nVetor A em ordem crescente:\n");
  for(i = 0; i < tam; i++) {
    printf("%i, ", vetor[i]);
  }
  
  return 0;
}