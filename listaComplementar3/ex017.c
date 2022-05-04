/*
Faça um programa que peça um número inteiro, calcule e mostre seu fatorial.
O usuário deve ter a opção de repetir quantas vezes quiser esta operação. 
Ex.: 5! =  5 x 4 x 3 x 2  =  120
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){ 

  int teste;

  do {
    calcFatorial();

    printf("Deseja repetir?\n[1] - Sim\n[2] - Nao\n");
    scanf("%i", &teste);
    fflush(stdin);

  } while (teste == 1);
  
	return 0;
} 

int calcFatorial() {
  int num1, total = 1;

  printf("Digite um numero:\n");
  scanf("%i", &num1);
  fflush(stdin);

  for(int i = num1; i > 0; i--) {
    total *= i;
  }

  return printf("%i! = %i\n", num1, total);
}