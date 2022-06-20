/*
  Uma sorveteria vende 3 tipos de picolés. O tipo 1 custa R$ 1,00, o tipo 2 
  custa R$ 1,20 e o tipo 3 custa R$2,50. As quantidades vendidas são anotadas 
  diariamente. Elabore um programa que nos dê como resposta:
    a. as quantidades de cada tipo de picolé vendidas num período em dias 
    informado pelo Usuário;
    b. o faturamento em R$ por tipo de picolé;
    c. o tipo de picolé mais vendido e o percentual  sobre o faturamento total;
    d. o valor total em R$ ganho pela sorveteria nesse período
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int opcao, quantidade, p1 = 0, p2 = 0, p3 = 0, i;
  float faturamento;

  for(i = 1; i <= 3; i++) {
    printf("[1] Picole Vermelho R$ 1,00\n");
    printf("[2] Picole Verde R$ 1,20\n");
    printf("[3] Picole Azul R$ 2,50\n");

    printf("\nDigite o numero correspondente ao picole que deseja comprar: ");
    scanf("%i", &opcao);
    fflush(stdin);

    printf("\nDigite a quantidade desejada: ");
    scanf("%i", &quantidade);
    fflush(stdin);

    switch(opcao) {
      case 1:
        p1 += quantidade;
        break;
      case 2:
        p2 += quantidade;
        break;
      case 3:
        p3 += quantidade;
        break;
    }
  }
    
  faturamento = p1 + (p2 * 1.20) + (p3 * 2.50);


  printf("\n");
  printf("Picole Vermelho\t[Faturamento: R$%.2f]\t[Vendas: %i]\n", p1 * 1.00, p1);
  printf("Picole Verde\t[Faturamento: R$%.2f]\t[Vendas: %i]\n", p2 * 1.20, p2);
  printf("Picole Azul\t[Faturamento: R$%.2f]\t[Vendas: %i]\n", p3 * 2.50, p3);
 
  if(p1 > p2 && p1 > p3) {
    printf("Picole Vermelho foi o mais vendido! [%.2f%% do faturamento total]\n", ((p1 * 1.00) / faturamento) * 100);
  } else if (p2 > p3) {
    printf("Picole Verde foi o mais vendido! [%.2f%% do faturamento total]\n", ((p2 * 1.20) / faturamento) * 100);
  } else {
    printf("Picole Azul foi o mais vendido! [%.2f%% do faturamento total]\n", ((p3 * 2.50) / faturamento) * 100);
  }

  printf("Faturamento total: R$ %.2f\n", faturamento);

  return 0;
}