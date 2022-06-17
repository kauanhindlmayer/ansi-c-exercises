/*
  Dado um vetor com uma frase de 80 letras (incluindo espaços em branco). 
  Escrever um programa que conte:
    a. quantos espaços em branco existem na frase
    b. quantas vezes aparecem as vogais
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  
  int i, contaEspacos, contaVogais;
  char frase[80];

  printf("Digite uma frase: ");
  gets(frase);
  fflush(stdin);

  for(i = 0; i < strlen(frase); i++) {
    if (isspace(frase[i])) contaEspacos++;
    if(toupper(frase[i]) == 'A' || toupper(frase[i]) == 'E' || toupper(frase[i]) == 'I' || toupper(frase[i]) == 'O' || toupper(frase[i]) == 'U') contaVogais++;
  }

  printf("\nQuantidade de espacos em branco: %i\nQuantidade de vogais: %i", contaEspacos, contaVogais);

  return 0;
}