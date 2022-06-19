/*
  Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
  Faça um programa que, dada a massa, em gramas, determine o tempo necessário para 
  que essa massa se torne  menor do que 0,5 gramas. Escreva a massa inicial, a 
  massa final e o tempo em segundos. Faça uma função para ler, outra para calcular 
  e outra para mostrar os resultados. (sem passagem de parâmetros).
*/

#include <stdio.h>
#include <stdlib.h>

float massaInicial, massaFinal = 0;
int tempo = 0;

void calculaTempo(void) {
  massaFinal = massaInicial;

  while(massaFinal >= 0.5) {
    massaFinal = massaFinal / 2;
    tempo += 50;
  }

}

void recebeMassa(void) {
  printf("Digite a massa em gramas: ");
  scanf("%f", &massaInicial);
  fflush(stdin);

  calculaTempo();
}

void imprimeResultado(void) {
  recebeMassa();

  printf("\nMassa Inicial:\t%.2fg", massaInicial);
  printf("\nMassa Final:\t%.2fg", massaFinal);
  printf("\nTempo:\t\t%is", tempo);
}


int main(void) {

  imprimeResultado();

  return 0;
}