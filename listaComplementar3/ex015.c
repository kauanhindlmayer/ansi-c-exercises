/*
Faça um programa que peça um número inteiro positivo e em seguida mostre 
este número invertido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  int num, centena, dezena, unidade, res;

  printf("Digite um numero inteiro e positivo: \n");
  scanf("%i", &num); // 123
  fflush(stdin);

  unidade = num % 10; // 3
  dezena = (num % 100) / 10; // 2
  centena = num / 100; // 1

  res = unidade * 100 + dezena * 10 + centena; // 300 + 20 + 1

  printf("O numero %i invertido equivale a %i\n", num, res);

	return 0;
} 