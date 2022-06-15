/* 
	Construa um programa que calcule a área de um círculo. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	area = 3.14 * (raio * raio);
	
	printf("\nA area do circulo equivale a %.2f\n", area);
	
	return 0;
}
