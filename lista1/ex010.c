/*
Construa um programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s. 

R.: 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int horas, valor, salario;
	
	printf("Quanto voce ganha por hora? ");
	scanf("%i", &valor);
	fflush(stdin);

	printf("Quantas horas voce trabalha por mes? ");
	scanf("%i", &horas);
	fflush(stdin);
	
	salario = horas * valor;
	
	printf("O total do seu salario neste mes e %0.1i", salario);
	
	return 0;
}
