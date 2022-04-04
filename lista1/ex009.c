/*
Construa um programa que pe�a as 4 notas bimestrais e mostre a m�dia. 

R.: 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float bi1, bi2, bi3, bi4, media;
	
	printf("Digite a nota do primeiro bimestre: ");
	scanf("%f", &bi1);
	fflush(stdin);

	printf("Digite a nota do segundo bimestre: ");
	scanf("%f", &bi2);
	fflush(stdin);

	printf("Digite a nota do terceiro bimestre: ");
	scanf("%f", &bi3);
	fflush(stdin);

	printf("Digite a nota do quarto bimestre: ");
	scanf("%f", &bi4);
	fflush(stdin);
	
	media = (bi1 + bi2 + bi3 + bi4) / 4;
	
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
 
