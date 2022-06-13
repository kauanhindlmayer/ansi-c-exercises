/*
  Faça um programa que leia um vetor de 10 caracteres, e diga quantas consoantes 
  foram lidas. Imprima as consoantes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char caracteres[10], c;
  int consoantes = 0, i;

  for(i = 0; i < 10; i++) {
    printf("Digite caractere %i: ", i + 1);
    scanf("%s", &c);
    fflush(stdin);

    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
      caracteres[i] = c;
    } else {
      printf("\nErro! Caracter invalido.");
      i--;
    }
  }

  printf("\nConsoantes digitadas: ");

  for(i = 0; i < 10; i++) {
    char letra = caracteres[i];

    if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' 
    && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U') {
      printf("%c, ", caracteres[i]);
      consoantes++;
    }
  }

  printf("\nTotal de consoantes: %i", consoantes);

  return 0;
}