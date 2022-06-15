/*
	Construa um algoritmo que peça um número e então mostre a mensagem “O número 
	informado foi [número]“
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num1;
	
	printf("Digite um numero: ");
	scanf("%i", &num1);
	fflush(stdin);
	
	printf("O numero informado foi %i.", num1);
	
	return 0;
}