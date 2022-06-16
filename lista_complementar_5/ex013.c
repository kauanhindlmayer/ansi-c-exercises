/*
  A função para saber se o número é par ou ímpar retornará 0(zero) se o número 
  for par e 1 se for ímpar. A função para saber se o número e positivo ou negativo 
  retornara 1 se o número for positivo, e -1 se for negativo
*/

#include <stdio.h>
#include <stdlib.h>

int menu(void) {

  int opcao;

  printf("\n-----------MENU-----------\n");
  printf("[1] - Par ou ímpar        \n");
  printf("[2] - Positivo ou negativo\n");
  printf("[3] - Sair                \n");
  printf("--------------------------\n");
  printf("Digite a opcao desejada: ");
  scanf("%i", &opcao);
  fflush(stdin);

  return opcao;
}

int parImpar() {

  int numero;

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);

  if(numero % 2 == 0) {
    return 0;
  } else {
    return 1;
  }
}

int positivoNegativo() {

  int numero;

  printf("Digite um numero: ");
  scanf("%i", &numero);
  fflush(stdin);

  if(numero == 0) {
    return 0;
  } else if(numero > 0) {
    return 1;
  } else {
    return -1;
  }
}

int main(void) {

  int res;

  switch(menu()) {
    case 1:
      res = parImpar();
      res == 0 ? printf("\nNumero PAR") : printf("\nNumero IMPAR");
      break;
    case 2:
      res = positivoNegativo();
      res == 1 ? printf("\nNumero POSITIVO") : res == 0 ? printf("\nNumero NEUTRO") : printf("\nNumero NEGATIVO");
      break;
    case 3:
      printf("\nFim!");
      break;
    default:
      printf("Valor invalido!\n");
  }
  
  return 0;
}