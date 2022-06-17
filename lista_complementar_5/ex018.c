/*
  Faça um programa que leia uma data, passe para uma função que reajuste esta 
  data em cinco dias.
*/

#include <stdio.h>
#include <stdlib.h>

void ajustaData(int dia, int mes, int ano) {
  if(mes == 12 && dia > 26) {
    dia = (dia + 5) % 31;
    mes = 1;
    ano++;
  } else if(mes == 2 && dia > 23) {
    dia = (dia + 5) % 28;
    mes++;
  } else if(dia >= 26) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) {
      dia = (dia + 5) % 31;
    } else {
      dia = (dia + 5) % 30;
    }
  } else {
    dia += 5;
  }

  printf("\nData reajustada: %i/%i/%i", dia, mes, ano);
}

int main(void) {

  int dia, mes, ano;

  printf("Digite uma data (dd/mm/yy): ");
  scanf("%i/%i/%i", &dia, &mes, &ano);
  fflush(stdin);

  ajustaData(dia, mes, ano);

  return 0;
}