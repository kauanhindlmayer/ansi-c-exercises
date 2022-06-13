/*
  Faça um programa que leia um vetor A de N números inteiros e gere um vetor B 
  conforme modelo: 
  A = { 10, 5, 7, 8, 12, 8, 3, 4  }  
  => { primeiro – último, segundo – penúltimo, terceiro – antepenúltimo, ... } 
  => B = { 6, 2, -1, -4, 4, 1, -2, -6  }
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       8

int main(void) {

  int vetorA[tam], vetorB[tam], j = tam - 1, i;

  for(i = 0; i < tam; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  printf("\nVetor resultante: ");
  for(i = 0; i < tam; i++) {
    vetorB[i] = vetorA[i] - vetorA[j];
    printf("%i, ", vetorB[i]);
    j--;
  }
  
  return 0;
}