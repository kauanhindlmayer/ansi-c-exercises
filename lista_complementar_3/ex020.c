/*
  Faça um programa que peça um número qualquer e que calcule a tabuada deste 
  número; mostre a tabuada na ordem inversa ( 10, 9, 8 ...). O usuário pode 
  repetir a operação quantas vezes quiser. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int repetir;
  
  do {
    tabuada();

    printf("Deseja repetir?\n[1] - Sim\n[2] - Nao\n");
    scanf("%i", &repetir);
    fflush(stdin);

    printf("\n");
  } while (repetir == 1);
	
	return 0;
}

void tabuada() {
  int num1;

  printf("Digite um numero: ");
  scanf("%i", &num1);
  fflush(stdin);

  for(int i = 10; i >= 1; i--) {
    printf("%i * %i = %i\n", i, num1, i * num1);
  }
}
