/*
  Dada uma lista de 50 nomes, verificar se existe um nome informado pelo usuário. 
  Se existir, imprimir a posição onde foi encontrado o nome, e o nome completo, 
  se não, imprimir: “Nome não encontrado”.  A lista e o nome para procura são 
  fornecidos pelos usuários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam       5

int main(void) {

  int i, teste = 0, posicao;
  char listaDeNomes[100][tam], nome[100];

  for(i = 0; i < tam; i++) {
    printf("Digite o nome %i: ", i + 1);
    gets(listaDeNomes[i]);
    fflush(stdin);
  }

  printf("\nDigite o nome a ser procurado: ");
  gets(nome);
  fflush(stdin);
  
  for(i = 0; i < tam; i++) {
    if(strcmp(nome, listaDeNomes[i]) == 0) {
      teste = 1;
      posicao = i + 1;
    }
  }

  teste == 1 ? printf("\nO nome %s foi encontrado na posicao %i.", nome, posicao) : printf("\nNome nao encontrado.");

  return 0;
}