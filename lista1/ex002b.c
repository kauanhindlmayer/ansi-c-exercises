	// Início do programa
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int ano_nasc, ano_atual, idade;
	
	printf("Digite o ano atual: ");
	scanf("%i", &ano_atual);
	fflush(stdin);
	printf("Digite o seu ano de nascimento: ");
	scanf("%i", &ano_nasc);	
	fflush(stdin);

	idade = ano_atual - ano_nasc;
	
	printf("A idade e %i\n", idade);
	
	return 0;
}
