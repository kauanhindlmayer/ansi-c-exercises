/*
	Faça um programa que efetue conversões de medidas:
		1-metros para centímetros
		2-centímetros para metros 
		3-dias para horas 
		4-horas para dias 
		5-km/h para milhas/h (1,684)
		6-milhas/h para km/h
		7-Celsius para Fahrenheit
		8-Farenheit para Celsius
		9-Kg para arroba (15)
		10-arroba para Kg  
		11-polegada para cm (2,75)
		12-cm para polegada
		13-palmo para centímetros (22)
		14-centímetros para palmos
		15-pé para centímetros (33)
		16-cm para pé
		17-nó para km/h (1,852)
		18-km/h para nós
		19-côvado para cm (66)
		20-cm para côvado
*/

#include <stdio.h>
#include <stdlib.h>

void menu(void) {
	printf("---------------MENU---------------\n");
	printf("[1] - Metros para centimetros\n[2] - Centimetros para metros\n");
	printf("[3] - Dias para horas\n[4] - Horas para dias\n");
	printf("[5] - Km/h para milhas/h\n[6] - Milhas/h para Km/h\n");
	printf("[7] - Celsius para Fahrenheit\n[8] - Farenheit para Celsius\n");
	printf("[9] - Kg para arroba\n[10] - Arroba para Kg\n");
	printf("[11] - Polegada para cm\n[12] - Cm para polegada\n");
	printf("[13] - Palmo para centimetros\n[14] - Centimetros para palmos\n");
	printf("[15] - Pe para centimetros\n[16] - Cm para pe\n");
	printf("[17] - No para km/h\n[18] - Km/h para nos\n");
	printf("[19] - Covado para cm\n[20] - Cm para covado\n");
	printf("----------------------------------\n");
}

void metrosParaCentimentros(void) {
	float valor;
	printf("Digite um valor em metros: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2fm equivalem a %.2f centimetros.", valor, valor * 100);
}

void centimentrosParaMetros(void) {
	float valor;
	printf("Digite um valor em centimetros: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2fcm equivalem a %.2f metros.", valor, valor / 100);
}

void diasParaHoras(void) {
	float valor;
	printf("Digite um valor em dias: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f dias equivalem a %.2f horas.", valor, valor * 24);
}

void horasParaDias(void) {
	float valor;
	printf("Digite um valor em horas: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f horas equivalem a %.2f dias.", valor, valor / 24);
}

void kmParaMilhas(void) {
	float valor;
	printf("Digite um valor em Km/h: \n");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f Km/h equivalem a %.2f milhas/h.", valor, valor * 1684);
}

void milhasParaKm(void) {
	float valor;
	printf("Digite um valor em Milhas/h: \n");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f Milhas/h equivalem a %.2f Km/h.", valor, valor / 1684);
}

void celsiusParaFahrenheit(void) {
	float valor;
	printf("Digite um valor em Celsius: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f graus celsius equivalem a %.2f graus fahrenheit.", valor, (valor * 1.8) + 32);
}

void fahrenheitParaCelsius(void) {
	float valor;
	printf("Digite um valor em Fahrenheit: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f graus fahrenheit equivalem a %.2f graus celsius.", valor, (valor - 32) / 1.8);
}

void kgParaArroba(void) {
	float valor;
	printf("Digite um valor em quilogramas: ");
	scanf("%f", &valor);
	fflush(stdin); 
	printf("\n%.2f Kg equivalem a %.2f @.", valor, valor / 15);
}

void arrobaParaKg(void) {
	float valor;
	printf("Digite um valor em Arrobas: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f @ equivalem a %.2f Kg.", valor, valor * 15);
}

void polegadaParaCm(void) {
	float valor;
	printf("Digite um valor em Polegadas: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f polegadas equivalem a %.2f cm.", valor, valor * 2.54);
}

void cmParaPolegada(void) {
	float valor;
	printf("Digite um valor em Centimetros: ");
	scanf("%f", &valor);
	fflush(stdin); 
	printf("\n%.2f cm equivalem a %.2f Polegadas.", valor, valor / 2.54);
}

void palmoParaCentimetro(void) {
	float valor;
	printf("Digite um valor em Palmos: ");
	scanf("%f", &valor);
	fflush(stdin); 

	printf("\n%.2f palmos equivalem a %.2f centimetros.", valor, valor * 22.86);
}

void centimetroParaPalmo(void) {
	float valor;
	printf("Digite um valor em Centimetros: ");
	scanf("%f", &valor);
	fflush(stdin); 
	printf("\n%.2f centimetros equivalem a %.2f palmos.", valor, valor / 22.86);
}

void peParaCentimetros(void) {
	float valor;
	printf("Digite um valor em Pes: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f pes equivalem a %.2f centimetros.", valor, valor * 30.48);
}

void centimetrosParaPe(void) {
	float valor;
	printf("Digite um valor em Centimetros: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f centimetros equivalem a %.2f pes.", valor, valor / 30.48);
}

void noParaKm(void) {
	float valor;
	printf("Digite um valor em Nos/h: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f nos/h equivalem a %.2f Km/h.", valor, valor * 1854);
}

void kmParaNo(void) {
	float valor;
	printf("Digite um valor em Km/h: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f Km/h equivalem a %.2f Nos/h.", valor, valor / 1.854);
}

void covadoParaCm(void) {
	float valor;
	printf("Digite um valor em Covado: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f covados equivalem a %.2f centimetros.", valor, valor * 66);
}

void cmParaCovado(void) {
	float valor;
	printf("Digite um valor em Centimetros: ");
	scanf("%f", &valor);
	fflush(stdin);
	printf("\n%.2f centimetros equivalem a %.2f covados.", valor, valor / 66);
}

int main(void){

	int conversor;

	menu();
	printf("Digite a opcao desejada: ");
	scanf("%i", &conversor);
	fflush(stdin);

	switch(conversor) {
		case 1:
			metrosParaCentimentros();
			break;
		case 2:
			centimentrosParaMetros();
			break;
		case 3:
			diasParaHoras();
			break;
		case 4:
			horasParaDias();
			break;
		case 5:
			kmParaMilhas();
			break;
		case 6:
			milhasParaKm();
			break;
		case 7:
			celsiusParaFahrenheit();
			break;
		case 8:
			fahrenheitParaCelsius();
			break;
		case 9:
			kgParaArroba();
			break;
		case 10:
			arrobaParaKg();
			break;
		case 11:
			polegadaParaCm();
			break;
		case 12:
			cmParaPolegada();
			break;
		case 13:
			palmoParaCentimetro();
			break;
		case 14:
			centimetroParaPalmo();
			break;
		case 15:
			peParaCentimetros();
			break;
		case 16:
			centimetrosParaPe();
			break;
		case 17:
			noParaKm();
			break;
		case 18:
			kmParaNo();
			break;
		case 19:
			covadoParaCm();
			break;
		case 20:
			cmParaCovado();
			break;
		default:
			printf("\nOpcao invalida!");
	}
}