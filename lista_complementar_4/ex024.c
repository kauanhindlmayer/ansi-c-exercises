/*
  Faça um programa que permita ao usuário digitar o seu nome e em seguida mostre 
  o nome do usuário de trás para frente utilizando somente letras maiúsculas. 
  obs.: lembre-se que ao informar o nome o usuário pode digitar letras maiúsculas 
  ou minúsculas. Não permita que o usuário informe números para o seu nome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {

  char nome[50], i;

  for(i = 0; i < 1; i++) {
    printf("Digite seu nome: ");
    gets(nome);
    fflush(stdin);
  }

  for(i = 0; i < strlen(nome); i++) {
    int teste = 0;

    if(nome[i] >= 48 && nome[i] <= 57) {
      teste = 1;
    }

    if(teste == 1) {
      printf("\nNome invalido!");
      return 0;
    }
  }

  printf("\nNome invertido e maiusculo: ");
  for(i = strlen(nome); i >= 0; i--) {
    printf("%c", toupper(nome[i]));
  }

  return 0;
}