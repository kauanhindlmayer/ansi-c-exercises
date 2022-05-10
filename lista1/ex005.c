/* 
	Construa um algoritmo que peça 2 n�meros inteiros e um n�mero real. Calcule e mostre: 

	a. o produto do dobro do primeiro com metade do segundo. 

	b. a soma do triplo do primeiro com o terceiro. 

	c. o terceiro elevado ao cubo. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num1, num2, a;
	float num3, b, c;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &num1);
	fflush(stdin);

	printf("Digite outro numero inteiro: ");
	scanf("%i", &num2);	
	fflush(stdin);
	
	printf("Digite um numero real: ");
	scanf("%f", &num3);	
	fflush(stdin);

	a = (num1 * 2) * (num2 / 2);
	b = (num1 * 3) +  num3;
	c = (num3 * num3 * num3);
	
	printf("O produto do dobro do primeiro com a metade do segundo e %i\n", a);
	printf("A soma do triplo do primeiro com o segundo e %0.2f\n", b);
	printf("O terceiro elevado ao cubo e %0.2f\n", c);
	
	return 0;
}
