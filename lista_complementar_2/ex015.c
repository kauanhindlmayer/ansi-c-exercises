/*
	Faça um programa que tendo como dados de entrada o preço de custo de 
	um produto e um código de origem, emita o preço junto de sua 
	procedência. Caso o código não seja nenhum dos especificados, 
	o produto deve ser classificado como importado. 
	Código de origem: 1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 ou 
	6 - nordeste 7 ou 8 Centro-oeste.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	float custo;
	int codigoDeOrigem;
	char origem[12];

	printf("Digite o preco de custo do produto: ");
	scanf("%f", &custo);
	fflush(stdin);
	
	printf("Digite o codigo de origem do produto: ");
	scanf("%i", &codigoDeOrigem);
	fflush(stdin);

	if (codigoDeOrigem == 1) {
		strcpy(origem, "Sul");
	} else if (codigoDeOrigem == 2) {
		strcpy(origem, "Norte");
	} else if (codigoDeOrigem == 3) {
		strcpy(origem, "Leste");
	} else if (codigoDeOrigem == 4) {
		strcpy(origem, "Oeste");
	} else if (codigoDeOrigem == 5 || codigoDeOrigem == 6) {
		strcpy(origem, "Nordeste");
	} else if (codigoDeOrigem == 7 || codigoDeOrigem == 8) {
		strcpy(origem, "Centro-oeste");
	} else {
		strcpy(origem, "Importado!");
	}

	printf("\nPreco do produto: %.1f\nOrigem do produto: %s\n", custo, origem);

	return 0;
}
