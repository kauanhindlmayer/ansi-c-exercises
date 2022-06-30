#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

typedef struct {
  int id_produtos;
  char desc_produto[50];
  float qtd_estoque;
  float val_unit;
} Produto;

int produtosIndex = 0;

void opcaoinvalida(){
  printf("\nOpção inválida!");
  printf("\n\nPressione ENTER para voltar ao menu.");
  getchar();
  while (getchar() != '\n');
}

void incluir(Produto produtos[]) {

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

  printf("\n\nPressione ENTER para voltar ao menu.");
  getchar();
  while (getchar() != '\n');
}

void pesquisar(Produto produtos[]) {

  char desc[50];
  int i, teste = 0;

  printf("\nDigite a descricao do produto: ");
  scanf("%s", &desc);
  fflush(stdin);
  
  for(i = 0; i < strlen(desc); i++) {
    desc[i] = tolower(desc[i]);
  }

  for(i = 0; i < produtosIndex; i++) {    
    for(int j = 0; j < strlen(produtos[i].desc_produto); j++) {
      produtos[i].desc_produto[j] = tolower(produtos[i].desc_produto[j]);
    }

    int teste = strstr(desc, produtos[i].desc_produto);

    if(teste != NULL) {
      printf("\nProduto em estoque.\nQuantidade: %.1f\n", produtos[i].qtd_estoque);
    } else {
      teste = 1;
    }
  }

  if(teste == 1) printf("\nProduto nao encontrado.");

  printf("\n\nPressione ENTER para voltar ao menu.");
  getchar();
  while (getchar() != '\n');
}

void listar(Produto produtos[]) {
  int i;
  float estoque = 0, valorEstoque = 0;

  printf("\nLista de Produtos");
  printf("\nDescricao:\t\tQuantidade:\t\tPreco:");
  for(i = 0; i < produtosIndex; i++) {
    printf("\n%s\t\t\t%.1f\t\t\t%.1f", produtos[i].desc_produto, produtos[i].qtd_estoque, produtos[i].val_unit);
  }

  for(i = 0; i < produtosIndex; i++) {
    estoque += produtos[i].qtd_estoque;
    valorEstoque += (produtos[i].val_unit * produtos[i].qtd_estoque);
  }

  printf("\n\nQuantidade de itens em estoque: %.1f", estoque);
  printf("\nValor total dos itens em estoque: R$%1.f\n", valorEstoque);

  printf("\n\nPressione ENTER para voltar ao menu.");
  getchar();
  while (getchar() != '\n');
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  Produto produtos[20];
  int opcao;

  do {
    system("clear");

    printf("+-------------------------------------------------------------+\n");
    printf("|                       SISTEMA DE ESTOQUE                    |\n");
    printf("+-------------------------------------------------------------+\n");
    printf("| [1] - Incluir                                               |\n");
    printf("| [2] - Pesquisar                                             |\n");
    printf("| [3] - Listar                                                |\n");
    printf("| [4] - Finalizar                                             |\n");
    printf("+-------------------------------------------------------------+\n");
    printf("\nDigite a opção desejada: ");
    scanf("%i", &opcao);
    fflush(stdin);

    opcao == 1 ? incluir(produtos) : opcao == 2 ? pesquisar(produtos) :
    opcao == 3 ? listar(produtos) : opcao == 4 ? printf("\nObrigado por usar o programa!") : opcaoinvalida();

  } while(opcao != 4);

  return 0;
}