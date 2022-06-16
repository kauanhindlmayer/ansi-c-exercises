/*
  Faça uma função que leia um nome, converta o primeiro caractere deste nome 
  para maiúscula.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void ajustaNome() {

  char nome[50];

  printf("Digite seu nome: ");
  gets(nome);
  fflush(stdin);

  nome[0] = toupper(nome[0]);
  printf("\nNome ajustado: %s", nome);
}

int main(void) {
  
  ajustaNome();

  return 0;
}