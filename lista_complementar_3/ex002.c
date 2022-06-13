/*
	Faça um programa que peça dois números inteiros e gere os números pares que 
	estão no intervalo entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num1, num2, i;

	printf("Digite um numero: ");
	scanf("%i", &num1);
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%i", &num2);
	fflush(stdin);

	if (num1 > num2) {
		printf("\nValores pares que estao no intervalo de %i e %i:\n", num1, num2);
		for (i = num1 - 1; i > num2; i--) {
			if (i % 2 == 0) {
				printf("%i, ", i);
			}
		} 

	} else {
		printf("\nValores pares que estao no intervalo de %i e %i:\n", num1, num2);
		for (i = num1 + 1; i < num2; i++) {
			if (i % 2 == 0) {
				printf("%i, ", i);
			}
		}
	}

	printf("\n");

	return 0;
}