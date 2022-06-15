/*
  Faça  um  programa  que  calcule  e  mostre  a  soma  dos  números  pares  
  entre  100 e 200 (inclusive). O usuário deve ter a opção de repetir quantas 
  vezes quiser esta operação.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int somaInteiros = 0, i, repetir;

  do {
    for (i = 100; i <= 200; i++) {
      if (i % 2 == 0) {
        somaInteiros += i;
      }
    }

    printf("\nA soma dos numeros pares entre 100 e 200 equivale a %i.\n", somaInteiros);

    printf("Deseja repetir (1 - sim, 2 - nao)? ");
    scanf("%i", &repetir);
    fflush(stdin);
  } while (repetir != 2);

	return 0;
} 