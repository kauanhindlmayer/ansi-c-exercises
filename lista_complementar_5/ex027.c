/*
  Faça uma função que receba um valor em segundos, transforme esses segundos em horas, 
  minutos e segundos, passando para o programa principal. Incorpore esta função 
  à sua biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>
#include "./libs/calculasegundos.h"

int main(void) {

  int valor;

  printf("Digite um valor em segundos: ");
  scanf("%i", &valor);
  fflush(stdin);

  calculaSegundos(valor);

  return 0;
}