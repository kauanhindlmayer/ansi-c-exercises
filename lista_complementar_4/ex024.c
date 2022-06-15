/*
  Faça um programa que permita ao usuário digitar o seu nome e em seguida mostre 
  o nome do usuário de trás para frente utilizando somente letras maiúsculas. 
  obs.: lembre-se que ao informar o nome o usuário pode digitar letras maiúsculas 
  ou minúsculas. Não permita que o usuário informe números para o seu nome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char nome[50], tam, i;

  for(i = 0; i <= 1; i++) {
    printf("Digite seu nome: ");
    gets(nome);
    fflush(stdin);

    if(nome != char) {
      printf("Nome invalido!\n");
      i--;
    }
  }

  tam = strlen(nome);

  for(i = 0; i < tam; i++) {
    printf("%c ", nome[i]);
  }


  return 0;
}