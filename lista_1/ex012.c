/*
	Uma determinada empresa vende uma máquina que possui seis motores. Um de 20 CV, 
	dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais respectivamente 
	cada motor. Existe a necessidade de saber quantos motores deverão ser comprados 
	de cada modelo e quanto custará esta compra. Para isto elabore um programa que:  
		a) Pergunte quantas m�quinas serão vendidas;  
		b) Calcule e apresente na tela a quantidade de motores que deverão ser 
		comprados de cada modelo;  
		c) Calcule e apresente na tela o custo total por máquina, o custo por tipo 
		de motor e o custo total da compra. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int maquinas, motor20, motor1, motor5, cmotor20, cmotor1, cmotor5, custopormaquina, custo;
	
	printf("Quanto maquinas serao vendidas? ");
	scanf("%i", &maquinas);
	fflush(stdin);

	custo = (1500 + (300 * 2) + (600 *3)) * maquinas;
	custopormaquina = (1500 + (300 * 2) + (600 *3));
	motor20 = maquinas;
	motor1 = 2 * maquinas;
	motor5 = 3 * maquinas;
	cmotor20 = motor20 * 1500;
	cmotor1 = motor1 * 300;
	cmotor5 = motor5 * 600;
	
	printf ("----------------------------------------\n");
	printf ("Quantidade de motores a serem comprados:\n");
	printf ("%i motores de 20 CV \n%i motores de 1 CV \n%i motores de 5 CV\n", motor20, motor1, motor5);
	printf ("----------------------------------------\n");
	printf ("Custo por cada tipo de motor:\n");
	printf ("Motor 20cv: %i\nMotor 1cv: %i\nMotor 5cv: %i\n", cmotor20, cmotor1, cmotor5);
	printf ("----------------------------------------\n");
	printf ("Custo por maquina: %0.2i\n", custopormaquina);
	printf ("Custo total da compra: %0.2i\n", custo);
	printf ("----------------------------------------\n");

	return 0;
}
