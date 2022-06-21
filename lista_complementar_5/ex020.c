/*
  Faça um programa que tenha uma função que leia as coordenadas de dois pontos 
  e uma função que tenha essas coordenadas como parâmetro e retorne a distancia 
  entre os pontos lidos. D= sqrt (sqrt(x2-x1)+sqrt(y2-y1))
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Para biblioteca math.h ser incluida na compilação é necessário o uso da flag 
// -lm na linha de comando (gcc ex020.c -o ex020 -lm)

int calculaDistancia(int longInicial, int longFinal, int latInicial, int latFinal) {
  return sqrt(sqrt(longFinal - longInicial) + sqrt(latFinal - latInicial));
}

void recebeCoordenadas(void) {

  int longInicial, longFinal, latInicial, latFinal, res;

  printf("Entre com a Longitude incial: ");
  scanf("%i", &longInicial);
  fflush(stdin);

  printf("Entre com a Latitude inicial: ");
  scanf("%i", &latInicial);
  fflush(stdin);
  
  printf("Entre com a Longitude final: ");
  scanf("%i", &longFinal);
  fflush(stdin);

  printf("Entre com a Latitude final: ");
  scanf("%i", &latFinal);
  fflush(stdin);

  res = calculaDistancia(longInicial, longFinal, latInicial, latFinal);

  printf("\nDistancia entre as coordenadas: %i", res);
}

int main(void) {
  
  recebeCoordenadas();

  return 0;
}