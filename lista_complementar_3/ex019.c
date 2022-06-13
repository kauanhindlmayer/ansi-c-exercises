/*
  Faça um programa que mostre todos os primos entre 1 e N, sendo N um 
  número inteiro fornecido pelo usuário. O programa deverá mostrar 
  também o número de divisões que ele executou para encontrar os números 
  primos
*/
#include <stdio.h>
#include <stdlib.h>

void verificaPrimo (int x) {
  int divisores = 0, i; 

  for(i = 1; i <= x; i++) {
    if(x % i == 0) {
      divisores++;
    }
  }

  if(divisores == 2) {
    printf("\n%i [%i divisoes] ", x, i - 1);
  }
}

int main(void){
  int numero, i;

  printf("Digite um numero inteiro: ");
  scanf("%i", &numero);
  fflush(stdin);

  printf("\nPrimos entre 1 e %i: ", numero);

  for(i = 1; i <= numero; i++) {
    verificaPrimo(i);
  }

	return 0;
}