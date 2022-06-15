/*
  Faça um programa que leia 2 strings e informe o tamanho de cada string 
  acompanhado de uma frase que diga se as duas strings são iguais ou diferentes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char palavra1[50], palavra2[50], i;  
  int tam1, tam2, comp;

  printf("Digite a palavra 1: ");
  gets(palavra1);
  fflush(stdin);  

  printf("Digite a palavra 2: ");
  gets(palavra2);
  fflush(stdin);  
  
  tam1 = strlen(palavra1);
  printf("\nO tamanho da string %s vale %d.", palavra1, tam1);

  tam2 = strlen(palavra2);
  printf("\nO tamanho da string %s vale %d.", palavra2, tam2);
  
  comp = strcmp(palavra1, palavra2);
  comp == 0 ? printf("\nAs strings sao iguais.") : printf("\nAs strings sao diferentes.");

  return 0;
}