/*
  Faça um programa que implemente uma calculadora simples. O programa deve solicitar  
  os  operandos  e  o  operador  e  mostrar  a  entrada  e  o  resultado.
  Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero. 
  O menu será como segue:
    [ 1 ] –Adição
    [ 2 ] –Subtração
    [ 3 ] –Multiplicação
    [ 4 ] –Divisão
    [ 5 ] –Fim
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int menu, num1, num2;

  printf("[ 1 ] - Adição\n[ 2 ] - Subtração\n[ 3 ] - Multiplicação\n[ 4 ] - Divisão\n[ 5 ] - Fim");
  printf("\nDigite a opcao desejada: ");
  scanf("%i", &menu);
  fflush(stdin);

  if(menu >= 1 && menu <= 4) {
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    fflush(stdin);
  }

  switch(menu) {
    case 1:
      printf("\nA soma entre %i e %i equivale a %i.", num1, num2, num1 + num2);
      break;
    case 2:
      printf("\nA subtracao entre %i e %i equivale a %i.", num1, num2, num1 - num2);
      break;
    case 3:
      printf("\nA multiplicacao entre %i e %i equivale a %i.", num1, num2, num1 * num2);
      break;
    case 4: 
      printf("\nA divisao entre %i e %i equivale a %i.", num1, num2, num1 / num2);
      break;
    case 5:
      printf("\nFim!");
      break;
    default:
      printf("\nOpcao invalida.");
  }

  return 0;
}