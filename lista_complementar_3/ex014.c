/*
  Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade 
  de números pares, a quantidade de números impares e a soma de todos os 
  números.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
  int num, soma = 0, par = 0, impar = 0, i;

  for(i = 1; i <= 10; i++) {
    printf("Digite um numero: \n");
    scanf("%i", &num);
    fflush(stdin);

    soma += num;

    if (num % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }

  printf("Quantidade de numeros par: %i\nQuantidade de numeros impar: %i\nA soma de todos os numeros equivale a %i\n", par, impar, soma);
	
	return 0;
}