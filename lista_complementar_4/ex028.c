/*
  Um palíndromo é uma seqüência de caracteteste cufraseInvertidaIndexa leitura é idêntica se feita 
  da direita para esquerda ou vice-versa. Por exemplo: OSSO, RADAR e OVO são 
  palíndromos. Em textos mais complexos os espaços são ignorados. A frase SUBI 
  NO ONIBUS é o exemplo de uma frase palíndromo onde os espaços foram ignorados. 
  “Faça um programa que leia uma seqüência de caracteteste terminada pelo caractere 
  “.“, mostre-a e diga se é um palíndromo ou não. A seqüência a ser lida, 
  não possui mais dos 50 caracteteste
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int i, tam, fraseInvertidaIndex = 0, teste = 0;
  char frase[50], fraseInvertida[50];

  printf("Digite uma frase (max. 50 caracteteste): ");
  // scanf("%s", &frase);
  gets(frase);
  fflush(stdin);

  tam = strlen(frase);

  for(i = 0; i < tam; i++) {
    if(frase[i] != ' ' && frase[i] != '.') {
      fraseInvertida[fraseInvertidaIndex] = frase[i];
      fraseInvertidaIndex++;
    }
  }

  fraseInvertida[fraseInvertidaIndex] = '\0';

  tam = strlen(fraseInvertida);

  for(i = 0; i < tam - 1; i++, tam--) {
    if(fraseInvertida[i] != fraseInvertida[tam - 1]) teste++;
  }

  teste == 0 ? printf("\nPalindromo") : printf("\nNao Palindromo");

  return 0;
}