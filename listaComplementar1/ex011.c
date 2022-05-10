/*
	Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF), 
	transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F-32)/9}  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float celsius, fahrenheit;
	
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &fahrenheit);
	fflush(stdin);
	
	celsius = 5 * (fahrenheit - 32)/ 9;
	
	printf("A temperatura em graus Celsius e %0.2f\n", celsius);
	
	return 0;
}