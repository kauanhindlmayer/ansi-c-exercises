/*
	Construa um programa que peça as 4 notas bimestrais e mostre a média. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite a nota do primeiro bimestre: ");
	scanf("%f", &nota1);
	fflush(stdin);

	printf("Digite a nota do segundo bimestre: ");
	scanf("%f", &nota2);
	fflush(stdin);

	printf("Digite a nota do terceiro bimestre: ");
	scanf("%f", &nota3);
	fflush(stdin);

	printf("Digite a nota do quarto bimestre: ");
	scanf("%f", &nota4);
	fflush(stdin);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (media >= 7 ){
		printf("-------------------------\n");
		printf("Media: %0.1f\nAprovado!\n", media);
		printf("-------------------------\n");
	}
	else {
		printf("-------------------------\n");
		printf("Media: %0.1f\nReprovado!", media);
		printf("-------------------------\n");
	}

	return 0;
}
 
