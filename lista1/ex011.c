/*
	Uma firma contrata um encanador a 25,00 por dia. Crie um programa que solicite o número de 
	dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se
	que são descontados 8% para o Imposto de Renda. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis
	int dias, valor = 25, salarioBruto, salarioLiquido, imposto;
	
	// Entrada de dados
	printf("Digite o numero de dias trabalhados: ");
	scanf("%i", &dias);
	fflush(stdin);

	// Processamentos
	salarioBruto = dias * valor;
	imposto = salarioBruto * 0.08;
	salarioLiquido = salarioBruto - imposto;
	
	
	//Saída de dados
	printf("O total do seu salario neste mes e %0.1i", salarioLiquido);
	
	// Fim do programa
	return 0;
}
