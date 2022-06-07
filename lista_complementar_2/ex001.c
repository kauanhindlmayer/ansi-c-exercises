/*
	Faça um programa que peça dois números e imprima o maior deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float num1, num2;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	fflush(stdin);

	printf("Digite outro numero: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	if (num1 > num2) {
        printf("O maior numero e %0.1f", num1);
    } else {
        printf("O maior numero e %0.1f", num2);
    }
	
	return 0;
}