/*
  Faça uma função que leia um literal (string) e converta este literal 
  para maiúscula.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void paraMaiuscula() {

  char string[50];

  printf("Digite uma string: ");
  gets(string);
  fflush(stdin);

  for(int i = 0; i < 50; i++) {
    string[i] = toupper(string[i]);
  }

  printf("\nString ajustada: %s", string);
}

int main(void) {

  paraMaiuscula();

  return 0;
}