/*
4-	Construa um algoritmo que converta metros para centímetros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float centimetros, metros;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metros);
	fflush(stdin);
	
    centimetros = metros * 100;
	
	printf("%0.2fm em centimetros equivale a %0.2fcm", metros, centimetros);
	
	return 0;
}