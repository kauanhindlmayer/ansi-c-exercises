/*
	Faça um programa que pergunte em que turno você estuda. Peça para digitar 
	M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem Bom Dia!, 
	Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char turno;

	printf("Em qual turno voce estuda?\n[M] - Matutino\n[V] - Vespertino\n[N] - Noturno\n\n");
	scanf("%c", &turno);
	fflush(stdin);
	
	if (turno == 'M' || turno == 'm') {
		printf("\nBom dia!");
	} else if (turno == 'V' || turno == 'v') {
		printf("\nBoa tarde!");
	} else if (turno == 'N' || turno == 'n') {
		printf("\nBoa noite!");
	} else {
		printf("\nMensagem Invalida!");
	}

	return 0;
}