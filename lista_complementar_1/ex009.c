/*
	Construa um programa que pergunte quanto você ganha por hora e o número de 
	horas trabalhadas no mes. Calcule e mostre o total do seu salário no referido 
	mês.  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int horas, valor, salario;
	
	printf("Quanto voce ganha por hora? ");
	scanf("%i", &valor);
	fflush(stdin);

	printf("Quantas hora voce trabalha por mes? ");
	scanf("%i", &horas);
	fflush(stdin);
	
	salario = horas * valor;
	
	printf("O total do seu salario neste mes e %0.1i", salario);
	
	return 0;
}