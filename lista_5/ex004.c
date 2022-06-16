/*
  Faça  uma  função  que  receba  como  argumento  os  valores  dos  lados  de  
  um triângulo,  a  função  deverá  retornar  0  se  triângulo  for  equilátero,  
  1  se  for isósceles ou 2 se for escaleno.
*/

#include <stdio.h>
#include <stdlib.h>

int triangulo(float a, float b, float c) {
  if(a == b && a == c) {
    return 0;
  } else if(a != b && b != c) {
    return 2;
  } else {
    return 1;
  }
}

int main(void) {

  float a, b, c;
  int res;

  printf("Digite o primeiro lado do triangulo: ");
  scanf("%f", &a);
  fflush(stdin);

  printf("Digite o segundo lado do triangulo: ");
  scanf("%f", &b);
  fflush(stdin);

  printf("Digite o terceiro lado do triangulo: ");
  scanf("%f", &c);
  fflush(stdin);

  if((a + b > c) && (a + c > b) && (b + c > a)) {
    res = triangulo(a, b, c);
    res == 0 ? printf("\nEquilatero.") : res == 1 ? printf("\nIsosceles.") : printf("\nEscaleno.");
  } else {
    printf("\nOs valores informados nao podem formar um triangulo!");
    return 0;
  }

  return 0;
}