/*
	Faça um programa que leia um número e exiba o dia correspondente da semana. 
	(1-Domingo, 2- Segunda,etc.), se digitar outro valor deve aparecer valor inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int dia;

	printf("Digite um numero: ");
	scanf("%i", &dia);
	fflush(stdin);

	if (dia == 1) {
		printf("Domingo");
	} else  if (dia == 2) {
		printf("Segunda");
	} else if (dia == 3) {
		printf("Terca");
	} else if (dia == 4) {
		printf("Quarta");
	} else if (dia == 5) {
		printf("Quinta");
	} else if (dia == 6) {
		printf("Sexta");
	} else if (dia == 7) {
		printf("Sabado");
	} else {
		printf("Valor invalido");
	}

	return 0;
}