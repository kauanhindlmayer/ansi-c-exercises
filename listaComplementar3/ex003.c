/*
	Faça um programa que leia dez números inteiros e calcule a diferença entre 
	o maior e o menor número do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int num, maior, menor;

	printf("Digite um numero: \n");
	scanf("%i", &num);
	fflush(stdin);

	maior = num;
	menor = num;

	for (int i = 1; i < 10; i++) {
			printf("Digite um numero: \n");
			scanf("%i", &num);
			fflush(stdin);

			if (num > maior) {
				maior = num;
			} else if (num < menor) {
				menor = num;
			}
	}

	printf("A diferença entre os numeros equvale a %i\n", maior - menor);
	
return 0;
}