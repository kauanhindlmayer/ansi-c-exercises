/*
	Construa um algoritmo que peça as 4 notas bimestrais e mostre a média, com 
	uma casa decimal
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite sua nota do primeiro bimestre: ");
	scanf("%f", &nota1);
	fflush(stdin);

	printf("Digite sua nota do segundo bimestre: ");
	scanf("%f", &nota2);
	fflush(stdin);

	printf("Digite sua nota do terceiro bimestre: ");
	scanf("%f", &nota3);
	fflush(stdin);

	printf("Digite sua nota do quarto bimestre: ");
	scanf("%f", &nota4);
	fflush(stdin);

	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("\nMedia: %0.1f", media);
	
	return 0;
}