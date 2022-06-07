/*
  Faça um programa que leia um vetor de 10 caracteres, e diga quantas 
  consoantes foram lidas. Imprima as consoantes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char caracteres[10];
  int consoantes = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um caractere: ");
    scanf("%s", &caracteres[i]);
    // gets(caracteres[i]);
  }

  for(int i = 0; i < 10; i++) {
    char letra = caracteres[i];

    if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u') {
      printf("%c, ", caracteres[i]);
      consoantes++;
    }
  }

  printf("\nTotal de consoantes: %i", consoantes);

  return 0;
}