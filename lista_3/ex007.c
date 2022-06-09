/*
  Faça um programa que gere a tabuada de 1 a 10 de qualquer número. 
  O usuário deve informar de qual número deseja ver a tabuada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int numero, res;

  printf("Digite qual numero deseja ver a tabuada: ");
  scanf("%i", &numero);
  fflush(stdin);

  printf("\nTabuada do %i\n", numero);
  for (int i = 1; i <= 10; i++) {
    res = numero * i;
    printf("%i * %i = %i\n", numero, i, res);
  }

  return 0;
}