/*
  Faça um programa que tenha uma função chamada MENU, que apresenta um menu,
  permita escolher uma opção e retorne esta opção para o programa principal. 
  Esta opção será utilizada por um case para chamar a função correspondente. 
  O menu e terá as seguintes opções:
    1 - Par ou ímpar
    2 - Positivo ou negativo
    3 - Sair
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