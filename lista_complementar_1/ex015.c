/* 
	Elabore um programa para calcular a quantidade necess�ria de latas de tinta 
	para pintar uma parede com X metros de largura por H metros de altura. 
	Considere que o consumo de latas de tinta por metro quadrado � 3 litros e a 
	quantidade de tinta por lata � 3,6 litros. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float largura, altura, area, consumo, latas;
	
	printf("Digite a largura da parede: ");
	scanf("%f", &largura);
	fflush(stdin);

	printf("Digite a altura da parede: ");
	scanf("%f", &altura);
	fflush(stdin);
	
	area = largura * altura;
	consumo = area * 3;
	latas = consumo / 3,6;
	
	printf("\nA quantidade necessaria de latas de tinta e %0.2f\n", latas);
	
	return 0;
}
