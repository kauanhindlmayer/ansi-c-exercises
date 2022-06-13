/*
  Faça um programa que leia um vetor do tipo char e em seguida informe quantos 
  elementos possui esse vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char vetor[50], tam;

  printf("Digite uma palavra: ");
  gets(vetor);
  fflush(stdin);

  tam = strlen(vetor);

  printf("A palavra %s possui %i caracteres.", vetor, tam);

  return 0;
}