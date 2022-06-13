/*
  Construa um algoritmo que leia um palavras de 15 palavras e mostre-os na
  ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char palavras[50][15];
  int i;

  for(i = 0; i < 15; i++) {
    printf("Digite a palavra %i: ", i + 1);
    gets(palavras[i]);
    fflush(stdin);
  } 

  for(i = 14; i >= 0; i--) {
    printf("%s, ", palavras[i]);
  }

  return 0;
}