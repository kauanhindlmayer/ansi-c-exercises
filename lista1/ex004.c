/* Construa um algoritmo que peça uma temperatura em graus Celsius (�C), transforme e 
mostre na tela a temperatura em graus Fahrenheit (�F). */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float celsius, fahrenheit;
		
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	fflush(stdin);

	fahrenheit = (celsius * 9/5) + 32;
	
	printf("A temperatura em graus Fahrenheint e %0.2f\n", fahrenheit);
	
	return 0;
}
