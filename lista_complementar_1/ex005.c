/*
	Construa um algoritmo que peça um número com 5 casas decimais e arredonde para duas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float num1;
	
	printf("Digite um numero com cinco casas decimais: ");
	scanf("%f", &num1);
	fflush(stdin);
	
	printf("O numero informado com apenas duas casas decimais equivale a %0.2f", num1);
	
	return 0;
}