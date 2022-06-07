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

  int menu, filme1 = 0, filme2 = 0, filme3 = 0;
  
  do { 
    int opcao, ingressos;
      
    printf("[1] - Doutor Estranho no Multiverso da Loucura\nPreco: R$ 34\nHorário: 21h00\n\n");
    printf("[2] - Animais Fantasticos: Os Segredos de Dumbledore\nPreco: R$ 34\nHorário: 21h00\n\n");
    printf("[3] - Cidade Perdida\nPreco: R$ 34\nHorário: 21h00\n\n");

    printf("Qual filme deseja assistir? ");
    scanf("%i", &opcao);
    fflush(stdin);

    printf("Quantos ingressos deseja? ");
    scanf("%i", &ingressos);
    fflush(stdin);

    switch(opcao) {
      case 1:
        filme1 += ingressos * 34;
        break;
      case 2:
        filme2 += ingressos * 34;
        break;
      case 3:
        filme3 += ingressos * 34;
        break;
    }

    printf("\nPreço total: R$ %i\n", ingressos * 34);

    printf("\nDeseja repetir?\n[1] - Sim\n[2] - Nao\n");
    scanf("%i", &menu);
    fflush(stdin);
    } while (menu == 1);

  printf("\nValor acumulado:\nSala 1 - %i\nSala 2 - %i\nSala 3 - %i\n", filme1, filme2, filme3);
  printf("O filme com a pior bilheteria foi ");

  if (filme1 < filme2 && filme1 < filme3) {
    printf("Doutor Estranho no Multiverso da Loucura.");
  } else if (filme2 < filme3) {
    printf("Animais Fantasticos: Os Segredos de Dumbledore.");
  } else {
    printf("Cidade Perdida.");
  }

  return 0;
}