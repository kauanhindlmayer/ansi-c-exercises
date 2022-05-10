/* 
	Construa um programa que calcule a �rea de um c�rculo. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	area = 3.14 * (raio * raio);
	
	printf("A area do circulo equivale a %f\n", area);
	
	return 0;
}
