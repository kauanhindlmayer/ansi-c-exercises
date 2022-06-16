/*
  A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... 
  Faça um programa capaz de gerar a série de acordo com a quantidade de termos 
  informada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  int f1 = 0, f2 = 1, i, r;

  printf("Quantos termos voce deseja? ");
  scanf("%i", &i);
  fflush(stdin);

  while (i > 0) {
    r = f1 + f2;
    printf("%i, ", r);
    if(f1 < f2) {
      f1 = r;
    } else {
      f2 = r;
    }
    i--;
  }

	return 0;
} 