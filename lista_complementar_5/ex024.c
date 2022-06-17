/*
  Faça um programa que tenha uma função que receba como parâmetros um valor para 
  base e um para o expoente e retorne o resultado(base elevada ao expoente). 
  Faça também uma função para mostrar o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void imprimeResultado(int resultado) {
  printf("\nResultado: %i", resultado);
}

int calculaPotencia(int base, int expoente) {
  int i, calc = 1;

  for(i = 0; i < expoente; i++) {
    calc *= base;
  }

  return calc;
}

int main(void) {

  int base, expoente, res;

  printf("Digite o valor do base: ");
  scanf("%i", &base);
  fflush(stdin);

  printf("Digite o valor do expoente: ");
  scanf("%i", &expoente);
  fflush(stdin);

  res = calculaPotencia(base, expoente);

  imprimeResultado(res);
  
  return 0;
}