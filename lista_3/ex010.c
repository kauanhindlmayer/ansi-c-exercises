/*
  Faça  um  programa  que  peça  dois  números  inteiros  (base  e  expoente),  
  calcule  e mostre o primeiro número elevado ao segundo número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

  int base, expoente, res, i;

  printf("Digite um numero: \n");
  scanf("%i", &base);
  fflush(stdin);

  printf("Digite outro numero: \n");
  scanf("%i", &expoente);
  fflush(stdin);

  res = base;

  for (i = 1; i < expoente; i++) {
    res *= base;
  }

  printf("%i elevado a %i equivale a %i.", base, expoente, res);
    
	return 0;
}