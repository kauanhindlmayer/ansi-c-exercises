/*
  Faça um programa que verifique se uma letra digitada é vogal ou consoante.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char letra;

  printf("Digite uma letra: ");
  scanf("%c", &letra);
  fflush(stdin);

  letra = tolower(letra);

  if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    printf("\nA letra %c e uma vogal.", toupper(letra));
  } else {
    printf("\nA letra %c e uma consoante.", toupper(letra));
  }

  return 0;
}