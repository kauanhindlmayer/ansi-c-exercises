/*
  Faça um programa que mostre 3 opções de filmes e o respectivo valor da 
  entrada. Peça para o usuário informar quantos ingressos quer e qual a 
  sua opção de filme. Mostre para cada opção escolhida o valor a pagar. 
  Execute estas operações enquanto não encerrarem as sessões. Ao final 
  das sessões apresente o valor acumulado por cada sala de projeção. 
  E o filme com menor frequência de público.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int hora = 17;

  do {
    bilheteria();
    hora++;
  } while (hora != 21);

    return 0;
}

void bilheteria() {
    
  int opcao, ingressos, acumulador = 0;
    
  printf("[1] - Doutor Estranho no Multiverso da Loucura\nPreço: R$ 34\nHorário: 21h00\n\n");
  printf("[2] - Animais Fantásticos: Os Segredos de Dumbledore\nPreço: R$ 34\nHorário: 21h00\n\n");
  printf("[3] - Cidade Perdida\nPreço: R$ 34\nHorário: 21h00\n\n");

  printf("Qual filme deseja assistir? ");
  scanf("%i", &opcao);
  fflush(stdin);

  printf("Quantos ingressos deseja? ");
  scanf("%i", &ingressos);
  fflush(stdin);

  acumulador += ingressos * 34;

  printf("\nPreço total: R$ %i\n", ingressos * 34);
  printf("\nValor acumulado: %i\n", acumulador);
}