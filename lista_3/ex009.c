/*
  Faça  um  programa  que  calcule  e  mostre  a  soma  dos  números  pares  entre  100 e 200 (inclusive). 
  O usuário deve ter a opção de repetir quantas vezes quiser esta operação.
*/

#include <stdio.h>
#include <stdlib.h>

void repetir() {

  int somaInteiros = 0;

  for (int i = 100; i <= 200; i++) {
    if (i % 2 == 0) {
      somaInteiros += i;
    }
  }

  printf("A soma dos numeros pares entre 100 e 200 equivale a %i\n", somaInteiros);
}

int main(void){

  int repetir;

  repetir();

  printf("Deseja repetir?\n[1] - Sim\n[2] - Nao\n");
  scanf("%i", &repetir);
  fflush(stdin);

  repetir == 1 ? repetir() : printf("Fim!");
	
	return 0;
} 