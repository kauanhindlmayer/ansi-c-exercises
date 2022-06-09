/*
  Faça  um  programa  que  leia  dez  números  inteiros  e  calcule  a  diferença  
  entre  o maior e o menor número do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero, maior = 1, menor = 1;

  for(int i = 0; i < 10; i++) {
    printf("Digite o numero %i: ", i + 1);
    scanf("%i", &numero);
    fflush(stdin);

    if (numero > maior) {
      maior = numero;
    }

    if (numero < menor) {
      menor = numero;
    }
  }

  printf("\nA diferenca entre o maior e o menor e igual a %i.", maior - menor);

  return 0;
}