/*
  Faça um programa que mostre todos os primos entre 1 e N, sendo N um 
  número inteiro fornecido pelo usuário. O programa deverá mostrar 
  também o número de divisões que ele executou para encontrar os números 
  primos
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
  int n, verificador, divisoes = 0;

  printf("Digite um numero inteiro: ");
  scanf("%i", &n);
  fflush(stdin);

  for(int i = 1; i <= n; i++) {
    for(int c = 2; c < i; c++) {
      if(i % c == 0) {
        verificador++;
        divisoes++;
      }
    }

    if (verificador == 0) {
      printf("%i [PRIMO] [Numero de divisoes: %i]\n", i, divisoes);
    } else {
      printf("%i [NAO PRIMO] [Numero de divisoes: %i]\n", i, divisoes);
    }
  }

	return 0;
}