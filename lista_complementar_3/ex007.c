/*
  Faça um programa que gere a tabuada de 1 a 10 de qualquer número. O usuário 
  deve informar de qual número deseja ver a tabuada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int num, res, i;

  printf("Digite qual numero deseja ver a tabuada: \n");
  scanf("%i", &num);
  fflush(stdin);

  printf("---------- TABUADA ----------\n");
  for (i = 1; i <= 10; i++) {
    res = num * i;
    printf("%i * %i = %i\n", num, i, res);
  }
  printf("-----------------------------\n");

  return 0;
}

