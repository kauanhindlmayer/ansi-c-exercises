/*
	Construa um algoritmo que calcule a área de um circulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	area = 3.14 * (raio * raio);
	
	printf("\nA area do circulo e %0.2f", area);
	
	return 0;
}