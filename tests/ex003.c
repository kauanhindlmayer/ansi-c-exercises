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
  char seguranca[50];

  system("clear");

  printf("                         Adicionando Item                        \n\n");

  printf("Digite a descriçao do produto: ");
  scanf("%s", &produtos[produtosIndex].desc_produto);
  fflush(stdin);

  // if(strcmp(seguranca, "") != 0 && strlen(seguranca) <= 50){

  // printf(produtos[produtosIndex].desc_produto, "%s", seguranca);

  printf("Digite a quantidade em estoque do produto: ");
  scanf("%f", &produtos[produtosIndex].qtd_estoque);
  fflush(stdin);

  printf("Digite o preço unitario do produto: R$");
  scanf("%f", &produtos[produtosIndex].val_unit);
  fflush(stdin);

  produtosIndex++;

  // } else {
  //   if (strcmp(seguranca, "") == 0){
  //     printf("\nÉ obrigatória a inserção de uma descrição!");
  //   } else{
  //     printf("\nA descrição excedeu o limite de 50 caracteres!");
  //   }
  // }

  printf("\n\nPressione ENTER para voltar ao menu.");
  getchar();
  while (getchar() != '\n');
}

void pesquisar(Produto produtos[]) {

  char desc[50];
  int i;

  system("clear");

  printf("                          Pesquisa Item                         \n");

  printf("\nDigite a descrição do produto: ");
  scanf("%s", &desc);
  fflush(stdin);

  for(i = 0; i < (int)strlen(desc); i++) {
    desc[i] = tolower(desc[i]);
  }

  if(produtosIndex > 0){
    system("clear");
    printf("                        Itens Pesquisados                       \n");
    for(i = 0; i < produtosIndex; i++) {
      for(int j = 0; j < (int)strlen(produtos[i].desc_produto); j++) {
        produtos[i].desc_produto[j] = tolower(produtos[i].desc_produto[j]);
      }

      if(strstr(produtos[i].desc_produto, desc)) {

        printf("\n+----+---------------+-----------------------+------------------+\n");
        printf("| id | Descrição     | Quantidade em estoque | Valor unitário   |\n");
        printf("+----+---------------+-----------------------+------------------+\n");
        printf("| %d  | %-14s| %.1f                   | %.2f           |\n", produtos[i].id_produtos, produtos[i].desc_produto ,produtos[i].qtd_estoque, produtos[i].val_unit);
        printf("+----+---------------+-----------------------+------------------+\n");
      } else {
        printf("\nProduto não encontrado.");
      }
    }
  } else {
    system("clear");
    printf("\nNenhum produto cadastrado!");
  }
  printf("\n\nPressione ENTER para voltar ao menu.");
  getchar();
  while (getchar() != '\n');
}

void listar(Produto produtos[]) {
  int i;
  float estoque = 0, valorEstoque = 0;

  system("clear");

  printf("                        Lista de Produtos                      \n");
  printf("+----+---------------+-----------------------+----------------+\n");
  printf("| id | Descrição     | Quantidade em estoque | Valor unitário |\n");
  printf("+----+---------------+-----------------------+----------------+\n");
  for(i = 0; i < produtosIndex; i++) {
    printf("| %d  | %-14s| %.1f                   | %.2f         |\n", produtos[i].id_produtos, produtos[i].desc_produto ,produtos[i].qtd_estoque, produtos[i].val_unit);
    estoque += produtos[i].qtd_estoque;
    valorEstoque += (produtos[i].val_unit * produtos[i].qtd_estoque);
  }
  printf("+----+---------------+-----------------------+----------------+\n\n");

  printf("+--------------------------------------------+----------------+\n");
  printf("| Quantidade de itens em estoque             | %.1f            |\n", estoque);
  printf("| Valor total dos itens em estoque           | R$%.2f      |\n", valorEstoque);
  printf("+--------------------------------------------+----------------+\n");

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
    printf("\n\nDigite a opção desejada: ");
    scanf("%i", &opcao);
    fflush(stdin);

    opcao == 1 ? incluir(produtos) : opcao == 2 ? pesquisar(produtos) :
    opcao == 3 ? listar(produtos) : opcao == 4 ? printf("\nObrigado por usar o programa!") : opcaoinvalida();

  } while(opcao != 4);

  return 0;
}