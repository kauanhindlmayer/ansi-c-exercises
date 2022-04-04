/* 
6-	Construa um algoritmo que calcule a área de um quadrado, em seguida mostre o dobro desta 
área para o usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int lado, area, dobro;
	
	printf("Digite a medida do lado do quadrado: ");
	scanf("%i", &lado);
	fflush(stdin);
	
	area = lado * lado;
	dobro = area * 2;
	
	printf("A area do quadrado equivale a %i e o seu dobro equivale a %i", area, dobro);
	
	return 0;
}