/*
  Faça um programa que leia uma palavra e execute a opção escolhida pelo 
  usuário conforme o menu que deve ser mostrado na tela:
    a) - Todas as letras em maiúscula;
    b) - Todas as letras em minúscula;
    c) - Inverte palavra;
    d) - Tamanho da palavra;
    e) - Fim;

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void paraMaiusculas(char palavra[]) {
  int tam, i;
  
  tam = strlen(palavra);

  for(i = 0; i < tam; i++) {
    palavra[i] = toupper(palavra[i]);
  }

  printf("\nTodas as letras em maiuscula: %s", palavra);
}

void paraMinusculas(char palavra[]) {
  int tam, i;
  
  tam = strlen(palavra);

  for(i = 0; i < tam; i++) {
    palavra[i] = tolower(palavra[i]);
  }

  printf("\nTodas as letras em minuscula: %s", palavra);
}

void invertePalavra(char palavra[]) {
  int tam, i;
  
  tam = strlen(palavra);

  printf("\nInverte palavra: ");

  for(i = tam; i >= 0; i--) {
    printf("%c", palavra[i]);
  }
}

void tamanhoPalavra(char palavra[]) {
  
  int tam = strlen(palavra);

  printf("\nTamanho da palavra: %i caracteres.", tam);
}

int main(void) {

  char palavra[50];
  int opcao;

  printf("Digite uma palavra: ");
  gets(palavra);
  fflush(stdin);

  printf("\n--------------MENU-------------\n");
  printf("[1] - Todas as letras em maiuscula\n");
  printf("[2] - Todas as letras em minuscula\n");
  printf("[3] - Inverte palavra             \n");
  printf("[4] - Tamanho da palavra          \n");
  printf("[5] - Fim                         \n");
  printf("---------------------------------\n");
  printf("Digite a opcao desejada: ");
  scanf("%i", &opcao);
  fflush(stdin);

  switch(opcao) {
    case 1:
      paraMaiusculas(palavra);
      break;
    case 2:
      paraMinusculas(palavra);
      break;
    case 3:
      invertePalavra(palavra);
      break;
    case 4:
      tamanhoPalavra(palavra);
      break;
    case 5:
      printf("\nFim!");
      break;
    default:
      printf("\nOpcao invalida!");
  }

  return 0;
}