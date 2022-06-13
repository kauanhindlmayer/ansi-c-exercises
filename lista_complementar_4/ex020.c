/*
  Faça um programa que leia 10 números inteiros, armazene num vetor e imprima-os 
  em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       10

int main(void) {

  int vetor[tam], aux, i, j;

  for(i = 0; i < tam; i++) {
    printf("Entre com o elemento %i: ", i + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }

  for(i = 0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
      if(vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }

  printf("Vetor em ordem crescente:\n");
  for(i = 0; i < tam; i++) {
    printf("%i, ", vetor[i]);
  }
  
  return 0;
}