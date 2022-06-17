/*
	Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
		a. Área Retângulo = base * altura
		b. Área Triângulo = base * altura/2
		c. Área do Círculo = pi * r * r
		d. Área do quadrado = lado * lado
		e. Área do trapézio = (lmaior + lmenor) * altura/2
		f. Sair
*/

#include <stdio.h>
#include <stdlib.h>

void operacoes (void) {
	int operador;
	float base, altura, raio, ladoMaior, ladoMenor;

	printf("---------FORMULARIO----------\n");
	printf("[ 1 ] - Area do Retangulo    \n");
	printf("[ 2 ] - Area do Triangulo    \n");
	printf("[ 3 ] - Area do Circulo      \n");
	printf("[ 4 ] - Area do Quadrado     \n");
	printf("[ 5 ] - Area do Trapezio     \n");
	printf("[ 6 ] - Sair                 \n");
	printf("-----------------------------\n");
	printf("Digite qual formula você deseja saber: ");
	scanf("%i", &operador);
	fflush(stdin);

	switch(operador) {
		case 1:
			printf("Digite a base do retangulo: ");
			scanf("%f", &base);
			fflush(stdin);

			printf("Digite a altura do retangulo: ");
			scanf("%f", &altura);
			fflush(stdin);

			printf("\nArea do Retangulo: %.2f", base * altura);
			break;
		case 2:			
			printf("Digite a base do triangulo: ");
			scanf("%f", &base);
			fflush(stdin);
			
			printf("Digite a altura do triangulo: ");
			scanf("%f", &altura);
			fflush(stdin);
			
			printf("\nArea do Triangulo: %.2f", (base * altura) / 2);
			break;
		case 3:
			printf("Digite o raio do circulo: ");
			scanf("%f", &raio);
			fflush(stdin);

			printf("\nArea do Circulo: %.2f", 3.14 * (raio * raio));
			break;
		case 4:
			printf("Digite lado do quadrado: ");
			scanf("%f", &base);
			fflush(stdin);
						
			printf("\nArea do Quadrado: %.2f", base * base);
			break;
		case 5:
			printf("Digite a medida do maior lado do trapezio: ");
			scanf("%f", &ladoMaior);
			fflush(stdin);
			
			printf("Digite a medida do menor lado do trapezio: ");
			scanf("%f", &ladoMenor);
			fflush(stdin);
			
			printf("Digite a altura do trapezio: ");
			scanf("%f", &altura);
			fflush(stdin);
						
			printf("\nArea do Trapezio: %.2f", ((ladoMaior + ladoMenor) * altura) / 2);
			break;
		case 6:
			printf("\nFim!");
			break;
		default:
			printf("Opcao invalida!");
	}
}

int main(void){
	int repetir;

	do {
		operacoes();
		printf("\n\nDeseja fazer mais alguma operacao? (1 - sim, 2 - nao)\n");
		scanf("%i", &repetir);
		fflush(stdin);
	} while(repetir == 1);
	
	return 0;
}