/*
  Faça um programa que peça um número para calcular o fatorial. O programa deve 
  ter uma função que verifique se a entrada é valida ( maior que 0 ) e se não 
  for fique repetindo, esta função deve utilizar passagem de parâmetro por 
  referencia. Outra função para calcular o fatorial ( passagem de parâmetro por 
  valor ).
*/

#include <stdio.h>
#include <stdlib.h>

int calculaFatorial(int numero) {
  return numero == 1 ? numero : numero * calculaFatorial(numero - 1);
}

int main(void) {

  int numero, i, res;

  for(i = 0; i < 1; i++) {
    printf("\nDigite um numero para calcular o fatorial: ");
    scanf("%i", &numero);
    fflush(stdin);

    if(numero <= 0) {
      printf("\nNumero invalido!");
      i--;
    }
  }

  res = calculaFatorial(numero);

  printf("\n%i! = %i", numero, res);

  return 0;
}