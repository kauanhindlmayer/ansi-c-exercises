/*
  Faça um programa que peca a hora atual (da região) e peça o código de uma 
  determinada localidade e então passe a hora e o código para uma função que 
  retorna a hora naquela localidade. Os códigos seguem abaixo: 
    1 - Rio de Janeiro     => 0 (zero)
    2 - Buenos Aires       => 0 (Zero)
    3 - Londres	           => +3
    4 – Roma               => +4
    5 - Cairo 	           => +5
    6 - Moscou	           => +6
    7 - Chicago	           => -3
    8 - México	           => -3
    9 - Nova Iorque        => -2
    10- Iugoslávia	       => -2
    11- Cuiabá	           => -1
    12- Ilhas São Pedro    => +1
*/

#include <stdio.h>
#include <stdlib.h>
 
int converterHorario(int horas, int minutos, int codigo) {
  switch(codigo) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
  }
}

int main(void) {

  int horas, minutos, codigo, i;

  printf("Digite a hora atual (00:00): ");
  scanf("%i:%i", &horas, &minutos);
  fflush(stdin);

  for(i = 0; i < 1; i++) {
    printf("\n[1] - Rio de Janeiro\t[2] - Buenos Aires\n[3] - Londres\t\t[4] - Roma\n[5] - Cairo\t\t[6] - Moscou");
    printf("\n[7] - Chicago\t\t[8] - México\n[9] - Nova Iorque\t[10]- Iugoslávia\n[11] - Cuiabá\t\t[12] - Ilhas São Pedro");
    printf("\nDigite a opcao desejada: ");
    scanf("%i", &codigo);
    fflush(stdin);

    if(numero < 1 || numero > 12) {
      printf("\nOpcao invalida!");
      i--;
    }
  }

  converterHorario(horas, minutos, codigo);

  return 0;
}