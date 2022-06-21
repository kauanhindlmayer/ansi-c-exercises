/*
  Faça uma função que receba os valores das horas, minutos e segundos e 
  transforme-os em segundos. Incluir esta função em sua biblioteca própria.
*/

#include <stdio.h>
#include <stdlib.h>
#include "./libs/calculasegundos.h"

int main(void) {

  int horas, minutos, segundos, res;

  printf("Digite o valor das horas, minutos e segundos (00:00:00): ");
  scanf("%i:%i:%i", &horas, &minutos, &segundos);
  fflush(stdin);

  res = calculaSegundos(horas, minutos, segundos);

  printf("Segundos: %i", res);
  
  return 0;
}