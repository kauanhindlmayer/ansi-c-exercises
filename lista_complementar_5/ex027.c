/*
  Faça uma função que receba um valor em segundos, transforme esses segundos em horas, 
  minutos e segundos, passando para o programa principal. Incorpore esta função 
  à sua biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>
#include "./libs/formatahorario.h"

int main(void) {

  int valor;

  printf("Digite um valor em segundos: ");
  scanf("%i", &valor);
  fflush(stdin);

  Tempo tempo = formataHorario(valor);

  printf("\nHorario Formatado: %i:%i:%i", tempo.horas, tempo.minutos, tempo.segundos);

  return 0;
}