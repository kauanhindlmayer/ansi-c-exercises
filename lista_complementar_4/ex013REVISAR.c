/*
  Faça um programa que leia 20 números inteiros e armazene-os num vetor. 
  Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. 
  Imprima os três vetores.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam        5

int main(void) {

  int numeros[tam], numeros_par[tam], numeros_impar[tam], i;
  
  for(i = 0; i < tam; i++) {
    printf("Digite o numero %i: ", i + 1);
    scanf("%i", &numeros[i]);
    fflush(stdin);

    if(numeros[i] % 2 == 0) {
      numeros_par[i] = numeros[i];
    } else {
      numeros_impar[i] = numeros[i];
    }
  }
    
  printf("\nNumeros: ");
  for(i = 0; i < tam; i++) {
    printf("%i, ", numeros[i]);
  }

  printf("\nNumeros PAR: ");
  for(i = 0; i < tam; i++) {
    printf("%i, ", numeros_par[i]);
  }

  printf("\nNumeros IMPAR: ");
  for(i = 0; i < tam; i++) {
    printf("%i, ", numeros_impar[i]);
  }

  return 0;
}