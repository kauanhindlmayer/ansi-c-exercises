/*
  Faça um programa que tenha um menu de conversão de R$ para US$ e US$ para R$, 
  cada conversão devera ter uma função que receba o valor e retorne o valor 
  convertido
*/

#include <stdio.h>
#include <stdlib.h>

void menu(void) {
  printf("----------MENU---------\n");
  printf("[1] - Real para Dolar  \n");
  printf("[2] - Dolar para Real  \n");
  printf("-----------------------\n");
}

void realDolar(void) {

  float valor; 

  printf("Digite o valor: R$ ");
  scanf("%f", &valor);
  fflush(stdin);

  printf("\nR$%.2f equivale a US$ %.2f", valor, valor / 5);
}

void dolarReal(void) {

  float valor; 

  printf("Digite o valor: US$ ");
  scanf("%f", &valor);
  fflush(stdin);

  printf("\nUS$%.2f equivale a R$ %.2f", valor, valor * 5);
}

int main(void) {

  int opcao;

  menu();

  printf("Digite a opcao desejada: ");
  scanf("%i", &opcao);
  fflush(stdin);

  opcao == 1 ? realDolar() : opcao == 2 ? dolarReal() : printf("Opcao invalida!");

  return 0;
}