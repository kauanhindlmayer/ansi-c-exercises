/*
	Construa um programa que pergunte quanto voc� ganha por hora e o n�mero de 
	horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float horas, valor, salario;
	
	printf("Quanto voce ganha por hora? ");
	scanf("%f", &valor);
	fflush(stdin);

	printf("Quantas horas voce trabalha por mes? ");
	scanf("%f", &horas);
	fflush(stdin);
	
	salario = horas * valor;
	
	printf("\nO total do seu salario neste mes e %0.2f", salario);
	
	return 0;
}
