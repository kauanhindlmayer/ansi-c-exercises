#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  int id_produtos;
  char desc_produto[50];
  float qtd_estoque;
  float val_unit;
} Produto;

void incluir(int produtosIndex, Produto produtos[]) {

  produtos[produtosIndex].id_produtos = produtosIndex + 1; 

  printf("\nDigite a descricao do produto: ");
  scanf("%s", &produtos[produtosIndex].desc_produto);
  fflush(stdin);

  printf("\nDigite a quantidade em estoque do produto: ");
  scanf("%f", &produtos[produtosIndex].qtd_estoque);
  fflush(stdin);

  printf("\nDigite o preco unitario do produto: R$");
  scanf("%f", &produtos[produtosIndex].val_unit);
  fflush(stdin);

  produtosIndex++;
}

void pesquisar(int produtosIndex, Produto produtos[]) {

  char desc[50];
  int i;

  printf("\nDigite a descricao do produto: ");
  scanf("%s", &desc);
  fflush(stdin);

  for(i = 0; i < produtosIndex; i++) {
    int teste = strcmp(tolower(desc), tolower(produtos[i].desc_produto));
    if(teste == 0) printf("\nProduto em estoque.\nQuantidade: %i", produtos[i].qtd_estoque);
  }
}

void listar(int produtosIndex, Produto produtos[]) {
  int i;
  float estoque = 0, valorEstoque = 0;

  printf("\nLista de Produtos (descricao/quantidade/preco): ");
  for(i = 0; i < produtosIndex; i++) {
    printf("\n%s\t%.1f\t%.1f", produtos[i].desc_produto, produtos[i].qtd_estoque, produtos[i].val_unit);
  }

  for(i = 0; i < produtosIndex; i++) {
    estoque += produtos[i].qtd_estoque;
    valorEstoque += produtos[i].val_unit;
  }

  printf("\nQuantidade de itens em estoque: %.1f", estoque);
  printf("\nValor total dos itens em estoque: %1.f", valorEstoque);
}

int main(void) {

  Produto produtos[20];
  int opcao, produtosIndex = 0;

  do {
    printf("\n[1] - Incluir\n[2] - Pesquisar\n[3] - Listar\n[4] - Finalizar");
    printf("\nDigite a opcao desejada: ");
    scanf("%i", &opcao);
    fflush(stdin);

    opcao == 1 ? incluir(produtosIndex, produtos) : opcao == 2 ? pesquisar(produtosIndex, produtos) : 
    opcao == 3 ? listar(produtosIndex, produtos) : opcao == 4 ? printf("\nFim!") : printf("\nOpcao invalida!");
  } while(opcao != 4);

  return 0;
}