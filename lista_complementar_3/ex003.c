/*
	Faça um programa que leia dez números inteiros e calcule a diferença entre 
	o maior e o menor número do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num, maior, menor, i;

	printf("Digite o numero 1: ");
	scanf("%i", &num);
	fflush(stdin);

	maior = num;
	menor = num;

	for (i = 1; i < 10; i++) {
			printf("Digite o numero %i: ", i + 1);
			scanf("%i", &num);
			fflush(stdin);

			if (num > maior) {
				maior = num;
			} else if (num < menor) {
				menor = num;
			}
	}

	printf("A diferença entre os numeros equivale a %i.\n", maior - menor);
	
return 0;
}