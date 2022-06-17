/*
  Faça um programa que após  ler um vetor de 20 elementos, calcule: 
  S=(A1-A20)2- (A2-A19)2+......+(A10-A11)2  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetor[20], i, j = 19, soma = 0, calc;

  for(i = 0; i < 20; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }

  for(i = 0; i < 10; i++) {
    calc = ((vetor[i] - vetor[j]) * 2);

    if(i % 2 == 0) {
      soma -= calc;
      printf("\nS -= (%i - %i) * 2", vetor[i], vetor[j]);
    } else {
      soma += calc;
      printf("\nS += (%i - %i) * 2", vetor[i], vetor[j]);
    }

    j--;
  }
  
  return 0;
}