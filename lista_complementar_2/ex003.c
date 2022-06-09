/*
  Faça um programa que peça um número e imprima se o número é par ou ímpar
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1;

	printf("Digite um numero: ");
	scanf("%i", &num1);
	fflush(stdin);

	num1 % 2 == 0 ? printf("O numero %i e par!", num1) : printf("O numero %i e impar!", num1);

	return 0;
}

