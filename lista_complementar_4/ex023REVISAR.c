/*
  Faça um programa que leia 2 strings e informe o tamanho de cada string 
  acompanhado de uma frase que diga se as duas strings são iguais ou diferentes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char palavras[20][2], i;  
  int tam, comp;

  for(i = 0; i < 2; i++) {
    printf("Digite a palavra %i: ", i + 1);
    gets(palavras[i]);
    fflush(stdin);    
  }

  for(i = 0; i < 2; i++) {
    tam = strlen(palavras[i]);
    printf("\nO tamanho da string %s vale %d.", palavras[i], tam);
  }

  comp = strcmp(palavras[0], palavras[1]);

  comp == 0 ? printf("\nAs strings sao iguais.") : printf("\nAs strings sao diferentes.");

  return 0;
}