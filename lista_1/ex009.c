/*
	Construa um programa que pe�a as 4 notas bimestrais e mostre a m�dia. 
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
		printf("MEDIA: %0.1f\nAPROVADO!\n", media);
		printf("-------------------------\n");
	}
	else {
		printf("-------------------------\n");
		printf("MEDIA: %0.1f\nREPROVADO!", media);
		printf("-------------------------\n");
	}

	return 0;
}
 
