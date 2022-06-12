/*
  Faça um programa que leia 10 números inteiros, armazene num vetor e imprima-os 
  em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       10

int main(void) {

  int vetor[tam], aux;

  for(int i = 0; i < tam; i++) {
    printf("Entre com o elemento %i: ", i + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }

  for(int i = 0; i < tam; i++) {
    for(int i = 0; i < tam; i++) {
      if(vetor[i] > vetor[i + 1]) {
        aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;
      }
    }
  }

  printf("Vetor em ordem crescente:\n");

  for(int i = 0; i < tam; i++) {
    printf("%i, ", vetor[i]);
  }
  
  return 0;
}