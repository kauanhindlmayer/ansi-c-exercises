#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero, qtd_lidos = 0, qtd_pares = 0, qtd_impares = 0, menor, maior;

  do {
    printf("\nDigite o valor: ");
    scanf("%i", &numero);
    fflush(stdin);

    if(numero <= 0) break;

    if(qtd_lidos == 0) {
      maior = numero;
      menor = numero;
    }

    if(numero > maior) maior = numero;
    if(numero < menor) menor = numero;
    
    qtd_lidos++;
    numero % 2 == 0 ? qtd_pares++ : qtd_impares++;
  } while(numero != 0);

  printf("\nTotal lidos: %i", qtd_lidos);
  printf("\nTotal de pares: %i", qtd_pares);
  printf("\nTotal de impares: %i", qtd_impares);
  printf("\nMenor: %i", menor);
  printf("\nMaior: %i", maior);

  return 0;
}