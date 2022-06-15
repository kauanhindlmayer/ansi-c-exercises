/*
	Construa um programa que pergunte quanto você ganha por hora e o número de 
	horas trabalhadas no mes. Calcule e mostre o total do seu salário no referido 
	mês.  
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