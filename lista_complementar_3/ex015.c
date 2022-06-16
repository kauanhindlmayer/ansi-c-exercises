/*
  Faça um programa que peça um número inteiro positivo e em seguida mostre 
  este número invertido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  int num, centena, dezena, unidade, res;

  printf("Digite um numero inteiro e positivo: ");
  scanf("%i", &num); 
  fflush(stdin);

  unidade = num % 10; 
  dezena = (num % 100) / 10; 
  centena = num / 100; 

  res = unidade * 100 + dezena * 10 + centena;

  printf("\nO numero %i invertido equivale a %i\n", num, res);

	return 0;
} 