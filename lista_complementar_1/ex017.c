/*
	Uma indústria produz três tipos de peças: parafuso, rosca e porca. 
	Sabendo-se que o preço unitário de cada tipo é R$ 3,00, R$ 1,00 e R$ 0,50 e que é 
	concedido um desconto de 2% por parafuso vendido,  2,5% por porca vendida e 2,7% por 
	rosca vendida, elabore um programa que nos dê a resposta no seguinte formato:

	Cliente: 9999 - xxxxxxxxxxxxxxxxxxxxxxx

	Quant	Produto		Unit.	Bruto		 Líquido
	99	Parafuso		3,00	999.99		  999.99
	99	Rosca			  1,00	999.99		  999.99
	99	Porca			  0,50	999.99		  999.99
	Total		9999.99
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	char nomeCliente[100];
	int quantidadeParafusos, quantidadeRoscas, quantidadePorcas;
	float precoParafusos, precoRoscas, precoPorcas, descontoParafusos, descontoRoscas;
	float descontoPorcas, totalBruto, totalLiquido;
	
	printf("Digite o seu nome: ");
	scanf("%s", &nomeCliente);
	fflush(stdin);

	printf("Quantos parafusos voce deseja comprar? ");
	scanf("%i", &quantidadeParafusos);
	fflush(stdin);

	printf("Quantas roscas voce deseja comprar? ");
	scanf("%i", &quantidadeRoscas);
	fflush(stdin);

	printf("Quantas porcas voce deseja comprar? ");
	scanf("%i", &quantidadePorcas);
	fflush(stdin);
	
	precoParafusos = quantidadeParafusos * 3;
	precoPorcas = quantidadePorcas * 1;
	precoRoscas = quantidadeRoscas * 0.5;
	totalBruto = precoParafusos + precoRoscas + precoRoscas;
	descontoParafusos = precoParafusos * 0.98;
	descontoPorcas = precoPorcas * 0.975;
	descontoRoscas = precoRoscas * 0.973;
	totalLiquido = descontoParafusos + descontoRoscas + descontoPorcas;

	printf("Cliente: %s\n", nomeCliente);
	printf("Quant\tProduto   \tUnit.\tBruto\tLiquido\n");
	printf("%i\tParafuso   \t3,00\t%0.2f\t%0.2f\n", quantidadeParafusos, precoParafusos, descontoParafusos);
	printf("%i\tRosca   \t1,00\t%0.2f\t%0.2f\n", quantidadeRoscas, precoRoscas, descontoRoscas);
	printf("%i\tPorca   \t0,50\t%0.2f\t%0.2f\n", quantidadePorcas, precoPorcas, descontoPorcas);
	printf("\t\t\tTotal:\tR$%0.2f\n", totalLiquido);

	return 0;
}