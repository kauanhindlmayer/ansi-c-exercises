/*
	Faça um programa que peça os 3 lados de um triângulo. O programa deverá 
	informar se os valores podem formar um triângulo, ou seja, a soma de dois 
	lados não pode ser menor que o lado restante. Indique, caso os lados formem 
	um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float lado1, lado2, lado3;

	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%f", &lado1);
	fflush(stdin);

	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%f", &lado2);
	fflush(stdin);

	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%f", &lado3);
	fflush(stdin);

	if (lado1 + lado2 > lado3) {
		printf("Os valores informados podem formar um triangulo!\n");
	} else {
		printf("Os valores informador não podem formar um triangulo!\n");
	}

	if (lado1 == lado2 == lado3) {
		printf("O triangulo e equilatero!\n");
	} else if (lado1 != lado2 != lado3) {
		printf("O triangulo e escaleno!\n");
	} else {
		printf("O triangulo e isosceles!\n");
	}

	return 0;
}
