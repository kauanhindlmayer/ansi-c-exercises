/*
A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... 
Faça um programa capaz de gerar a série de acordo com a quantidade de termos 
informada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  int res = [], num, quantidade;

  printf("Quantos termos voce deseja?\n");
  scanf("%i", &quantidade);
  fflush(stdin);

  for (int i = 1; i <= quantidade; i++) {
    num = [i] + [i * 2];
    res[i] = num;
  }

   printf("%d", res);

	return 0;
} 