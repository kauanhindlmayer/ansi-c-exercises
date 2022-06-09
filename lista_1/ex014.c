/*
	Construa um algoritmo que pe�a o salário bruto mensal de um funcionário, 
	calcule e apresente os valores conforme modelo abaixo: 

	Salário Bruto		: R$  

	(-) IR        (15%)	: R$ 

	(-) INSS      (11%)	: R$ 

	(-) Sindicato ( 3%)	: R$ 

	Salário líquido		: R$ 

	Obs.: Descontos = IR + INSS + Sindicato 

	Salário Líquido = Salário Bruto - Descontos 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float salarioBruto, ir, inss, sindicato, salarioLiquido;
	
	printf("Salario Bruto: R$");
	scanf("%f", &salarioBruto);
	fflush(stdin);
	
	ir = salarioBruto * 0.15;
	inss = salarioBruto * 0.11;
	sindicato = salarioBruto * 0.03;
	salarioLiquido = salarioBruto - ir - inss - sindicato;
	
	printf("(-) IR\t\t (15%%): R$%0.2f\n", ir);
	printf("(-) INSS\t (11%%): R$%0.2f\n", inss);
	printf("(-) Sindicato\t  (3%%): R$%0.2f\n", sindicato);
	printf("Salario Liquido: R$%0.2f\n", salarioLiquido);
	
	return 0;
}
