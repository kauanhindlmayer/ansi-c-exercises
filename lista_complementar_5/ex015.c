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
    case 3:
      if(horas > 21) {
        horas = (horas + 3) % 24;
      } else {
        horas += 3;
      }
      break;
    case 4:
      if(horas > 20) {
        horas = (horas + 4) % 24;
      } else {
        horas += 4;
      }
      break; 
    case 5:
      if(horas > 19) {
        horas = (horas + 5) % 24;
      } else {
        horas += 5;
      }
      break;      
    case 6:
      if(horas > 18) {
        horas = (horas + 6) % 24;
      } else {
        horas += 6;
      }
      break; 
    case 7:
      if(horas <= 3) {
        horas = (horas + 24) - 3;
      } else {
        horas -= 3;
      }
      break;
    case 8:
      if(horas <= 3) {
        horas = (horas + 24) - 3;
      } else {
        horas -= 3;
      }
      break;
    case 9:
      if(horas <= 2) {
        horas = (horas + 24) - 2;
      } else {
        horas -= 2;
      } 
      break;
    case 10:
      if(horas <= 2) {
        horas = (horas + 24) - 2;
      } else {
        horas -= 2;
      } 
      break;
    case 11:
      if(horas <= 1) {
        horas = (horas + 24) - 1;
      } else {
        horas -= 1;
      } 
      break;
    case 12:
      if(horas > 22) {
        horas = (horas + 1) % 24;
      } else {
        horas += 1;
      }
      break;
  }

  printf("\nHorario convertido: %i:%i", horas, minutos);

  return 0;
}

int main(void) {

  int horas, minutos, codigo, i, res;

  printf("Digite a hora atual (00:00): ");
  scanf("%i:%i", &horas, &minutos);
  fflush(stdin);

  for(i = 0; i < 1; i++) {
    printf("\n[1] - Rio de Janeiro\t[2] - Buenos Aires\n[3] - Londres\t\t[4] - Roma\n[5] - Cairo\t\t[6] - Moscou");
    printf("\n[7] - Chicago\t\t[8] - México\n[9] - Nova Iorque\t[10]- Iugoslávia\n[11] - Cuiabá\t\t[12] - Ilhas São Pedro");
    printf("\nDigite a opcao desejada: ");
    scanf("%i", &codigo);
    fflush(stdin);

    if(codigo < 1 || codigo > 12) {
      printf("\nOpcao invalida!");
      i--;
    }
  }

  converterHorario(horas, minutos, codigo);

  return 0;
}