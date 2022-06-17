/*
  Faça um programa para colocar três números em ordem crescente. Para fazer a 
  troca, usar uma função, usando passagem de parâmetro por referência.
*/

#include <stdio.h>
#include <stdlib.h>

void ordenaNumeros(int numeros[]) {
  int i, j, aux;

  for(j = 0; j < 3; j++) {
    for(i = 0; i < 3 - 1; i++) {
      if(numeros[i] > numeros[i + 1]) {
        aux = numeros[i];
        numeros[i] = numeros[i + 1];
        numeros[i + 1] = aux;
      }
    }
  }

  printf("\nNumeros ordenados: ");

  for(i = 0; i < 3; i++) {
    printf("%i, ", numeros[i]);
  }
}

int main(void) {
  int i, numeros[3];

  for(i = 0; i < 3; i++) {
    printf("Digite o numero %i: ", i + 1);
    scanf("%i", &numeros[i]);
    fflush(stdin);
  }

  ordenaNumeros(numeros);

  return 0;
}