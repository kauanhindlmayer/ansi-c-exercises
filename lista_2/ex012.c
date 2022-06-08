/*
  Faça um programa que leia um número e exiba o dia correspondente da semana. 
  (1-Domingo, 2-Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int dia;

  printf("Digite um numero entre 1-7: ");
  scanf("%i", &dia);
  fflush(stdin);

  switch(dia) {
    case 1:
      printf("\nDomingo.");
      break;
    case 2:
      printf("\nSegunda-feira.");
      break;
    case 3:
      printf("\nTerca-feira.");
      break;
    case 4:
      printf("\nQuarta-feira.");
      break;
    case 5:
      printf("\nQuinta-feira.");
      break;
    case 6:
      printf("\nSexta-feira.");
      break;
    case 7:
      printf("\nSabado.");
      break;
    default:
      printf("\nNumero invalido.");
  }

  return 0;
}