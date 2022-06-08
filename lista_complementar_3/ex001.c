/*
    Faça um programa que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num1, num2, c;

	printf("Digite um numero:\n");
	scanf("%i", &num1);
	fflush(stdin);

	printf("Digite outro numero:\n");
	scanf("%i", &num2);
	fflush(stdin);

	printf("\nValores inteiros no intervalo de %i e %i:\n", num1, num2);

	for (c = num1 + 1; c < num2; c++) {
		printf("%i, ", c);
	}

	return 0;
}