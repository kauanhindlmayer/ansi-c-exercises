/*
  Uma empresa vende 30 produtos. Cada produto é identificado por um código e 
  possui um preço. Usando vetor, faça um programa que armazene todos os códigos 
  e preços e imprima os três produtos mais caros.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       30

typedef struct {
  int codigo;
  float preco;
} Produto;

int main(void) {

  Produto produtos[tam];
  
  for(int i = 0; i < tam; i++) {
    printf("\nDigite o codigo do produto %i: ", i + 1);
    scanf("%i", &produtos[i].codigo);
    fflush(stdin);

    printf("Digite o preco do produto %i: ", i + 1);
    scanf("%f", &produtos[i].preco);
    fflush(stdin);
  }

  Produto produto1, produto2, produto3;

  produto1.preco = 0;
  produto2.preco = 0;
  produto3.preco = 0;

  for(int i = 0; i < tam; i++) {
    if(produtos[i].preco > produto1.preco && produtos[i].preco > produto2.preco && produtos[i].preco > produto3.preco) {
      produto1 = produtos[i];
    } else if(produtos[i].preco < produto1.preco && produtos[i].preco > produto2.preco && produtos[i].preco > produto3.preco) {
      produto2 = produtos[i];
    } else if(produtos[i].preco < produto1.preco && produtos[i].preco < produto2.preco && produtos[i].preco > produto3.preco) {
      produto3 = produtos[i];
    }
  }

  printf("\nProdutos mais caros (posicao/codigo/preco):");
  printf("\n1.\t\t%i\t\t%.2f", produto1.codigo, produto1.preco);
  printf("\n2.\t\t%i\t\t%.2f", produto2.codigo, produto2.preco);
  printf("\n3.\t\t%i\t\t%.2f", produto3.codigo, produto3.preco);

  return 0;
}