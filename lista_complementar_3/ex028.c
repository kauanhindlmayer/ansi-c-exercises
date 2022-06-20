/*
  Um vendedor recebe uma comissão mensal, além do seu salário, de 
  acordo com o valor da venda que efetuou no mês. Se o valor da venda 
  for igual ou superior a R$ 100.000,00 a sua comissão será de 10% sobre 
  o valor da venda, caso contrário, será de apenas 6%. Conhecemos o 
  código do vendedor, o salário fixo e o valor da venda por ele efetuada 
  no mês. Faça um programa que imprima o código, salário total e valor 
  em R$ da comissão. O programa deve permitir várias transações.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  float salarioFixo, comissao = 0, valor; 
  int codigo, repetir;

  printf("\nDigite seu salario fixo: R$");
  scanf("%f", &salarioFixo);
  fflush(stdin);
  
  printf("\nDigite seu codigo de vendedor: ");
  scanf("%i", &codigo);
  fflush(stdin);

  do {
    printf("\nDigite o valor da sua venda: R$");
    scanf("%f", &valor);
    fflush(stdin);

    if(valor >= 100.000) {
      comissao += (valor * 0.10);
    } else {
      comissao += (valor * 0.06);
    }

    printf("\nDeseja repetir? [1] - sim, [2] - nao\n");
    scanf("%i", &repetir);
    fflush(stdin);
  } while(repetir != 2);

  printf("\nCodigo: %i", codigo);
  printf("\nComissao: %.1f", comissao);
  printf("\nSalario Total: %.1f", salarioFixo + comissao);

  return 0;
}