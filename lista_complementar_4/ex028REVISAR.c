/*
  Um palíndromo é uma seqüência de caracteres cuja leitura é idêntica se feita 
  da direita para esquerda ou vice-versa. Por exemplo: OSSO, RADAR e OVO são 
  palíndromos. Em textos mais complexos os espaços são ignorados. A frase SUBI 
  NO ONIBUS é o exemplo de uma frase palíndromo onde os espaços foram ignorados. 
  “Faça um programa que leia uma seqüência de caracteres terminada pelo caractere 
  “.“, mostre-a e diga se é um palíndromo ou não. A seqüência a ser lida, 
  não possui mais dos 50 caracteres
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int i, j = 0, tam, res;
  char frase[50], fraseInvertida[50];

  printf("Digite uma frase (max. 50 caracteres): ");
  gets(frase);
  fflush(stdin);

  tam = strlen(frase);

  for(i = 0; i < tam; i++) {
    if(frase[i] != ' ' && frase[i] != '.') {
      fraseInvertida[j] = frase[i];
      j++;
    }
  }

  res = strcmp(frase, fraseInvertida);
  
  res == 0 ? printf("\nPalindromo") : printf("\nNao Palindromo");

  return 0;
}