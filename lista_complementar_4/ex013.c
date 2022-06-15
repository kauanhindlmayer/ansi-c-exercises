/*
  Faça um programa que leia 20 números inteiros e armazene-os num vetor. 
  Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. 
  Imprima os três vetores.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam        20

int main(void) {

  int numeros[tam], pares = 0, impares = 0, i;
  
  for(i = 0; i < tam; i++) {
    printf("Digite o numero %i: ", i + 1);
    scanf("%i", &numeros[i]);
    fflush(stdin);

    numeros[i] % 2 == 0 ? pares++ : impares++;
  }

  int numerosPar[pares], numerosImpar[impares], indexPar = 0, indexImpar = 0;

  for(i = 0; i < tam; i++) {
    if(numeros[i] % 2 == 0) {
      numerosPar[indexPar] = numeros[i];
      indexPar++;
    } else {
      numerosImpar[indexImpar] = numeros[i];
      indexImpar++;
    }
  }
    
  printf("\nNumeros: ");
  for(i = 0; i < tam; i++) {
    printf("%i, ", numeros[i]);
  }

  printf("\nNumeros PAR: ");
  for(i = 0; i < pares; i++) {
    printf("%i, ", numerosPar[i]);
  }

  printf("\nNumeros IMPAR: ");
  for(i = 0; i < impares; i++) {
    printf("%i, ", numerosImpar[i]);
  }

  return 0;
}