/*
	Faça um programa para controle de temperatura de um forno que derrete alumínio. 
	O programa deverá perguntar qual temperatura que o alumínio deverá ser trabalhado 
	e operar nas seguintes condições: 
		a. Se temperatura for inferior ou igual 500o C enviar uma mensagem para 
		tela "Temperatura Inválida"; 
		b. Se temperatura for menor do que 700o C enviar uma mensagem para tela 
		"Aquecimento Ligado em 100%"; 
		c. Se temperatura for menor do que 735o C enviar uma mensagem para tela 
		"Aquecimento Ligado em 50%"; 
		d. Se temperatura for maior ou igual 735o C enviar uma mensagem para tela 
		"Aquecimento Desligado"; 
		e. Se temperatura for maior do que 780o C enviar uma mensagem para tela 
		"SUPERAQUECIMENTO"; 
		f. Os valores digitados devem ser inteiros e inferiores de 1000. 
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float temperatura;

	printf("Qual temperatura o aluminio deve ser trabalhado?\n");
	scanf("%f", &temperatura);
	fflush(stdin);

	if (temperatura <= 500) {
		printf("Temperatura Invalida!");
	} else if (temperatura < 700) {
		printf("Aquecimento Ligado em 100%%.");
	} else if (temperatura < 735) {
		printf("Aquecimento Ligado em 50%%");
	} else if (temperatura >= 735) {
		printf("Aquecimento Desligado");
	} else if (temperatura > 780) {
		printf("SUPERAQUECIMENTO");
	} else {
		printf("Os valores digitados devem ser inteiros e inferiores de 1000.");
	}

	return 0;
}