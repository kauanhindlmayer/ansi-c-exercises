/*
	Faça um programa que peça os 3 lados de um triângulo. O programa deverá 
	informar se os valores podem formar um triângulo, ou seja, a soma de dois 
	lados não pode ser menor que o lado restante. Indique, caso os lados formem 
	um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float a, b, c;

	printf("Digite o primeiro lado do triangulo: ");
	scanf("%f", &a);
	fflush(stdin);

	printf("Digite o segundo lado do triangulo: ");
	scanf("%f", &b);
	fflush(stdin);

	printf("Digite o terceiro lado do triangulo: ");
	scanf("%f", &c);
	fflush(stdin);

	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		if (a == b == c) {
			printf("\nO triangulo e equilatero.");
		} else if (a != b != c) {
			printf("\nO triangulo e escaleno.");
		} else {
			printf("\nO triangulo e isosceles.");
		}
	} else {
		printf("\nOs valores informados não podem formar um triangulo.");
	}

	return 0;
}
