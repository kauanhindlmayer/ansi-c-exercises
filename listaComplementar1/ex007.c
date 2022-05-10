/*
	Construa um algoritmo que peça dois números, calcule e mostre a soma dos mesmos 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float num1, num2, soma;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	fflush(stdin);

	printf("Digite outro numero: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	soma = num1 + num2;
	
	printf("A soma entre %0.1f e %0.1f equivale a %0.1f",num1, num2, soma);
	
	return 0;
}