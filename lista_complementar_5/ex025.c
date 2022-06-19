/*
  Faça um programa que leia o preço de 10 produtos e armazene em um precos. 
  Faça uma função para ler, outra para ordenar ( em ordem de preço ) e outra 
  para mostrar os dados.(sem passagem de parâmetros)
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       5

int precos[tam];

void imprimePrecos(void) {
  
  recebePrecos();

  printf("\nPrecos em ordem crescente: ");
  for(int i = 0; i < tam; i++) {
    printf("%i, ", precos[i]);
  }
}

void recebePrecos(void) {
  int i;

  for(i = 0; i < tam; i++) {
    printf("Digite o valor do produto %i: R$", i + 1);
    scanf("%i", &precos[i]);
    fflush(stdin);
  }

  ordenaPrecos();
}

void ordenaPrecos(void) {
  int i, j, aux;

  for(j = 0; j < tam; j++) {
    for(i = 0; i < tam - 1; i++) {
      if(precos[i] > precos[i + 1]) {
        aux = precos[i];
        precos[i] = precos[i + 1];
        precos[i + 1] = aux;
      }
    }
  }
}

int main(void) {

  imprimePrecos();

  return 0;
}