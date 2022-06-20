/*
  Considere que um carro vai fazer uma viagem entre duas cidades 
  e que a distancia percorrida é informada (em Km). Informe também a 
  capacidade do tanque e o consumo médio (Km/l),  do veículo. 
  No inicio da viagem o carro esta com o tanque cheio.
    a. Deseja-se saber :
    b. Quantas vezes foi necessário reabastecer o tanque.
    c. Número de litros consumidos para percorrer a distancia indicada.
    d. Quantos litros restaram no tanque após a chegada ao destino.
    e. O programa deve permitir que o usuário execute esses cálculos quantas
    vezes ele quiser.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  float distancia, capacidade, consumo, gasto, resto, rendimento;
  int tanque = 0, repetir, i;

  do {
    printf("\nInforme distancia em quilometros: ");
    scanf("%f", &distancia); 
    fflush(stdin);

    printf("Informe a capacidade do tanque em litros: ");
    scanf("%f", &capacidade);
    fflush(stdin);

    printf("Informe o consume médio em quilometros por litros: ");
    scanf("%f", &consumo);
    fflush(stdin);

    rendimento = consumo * capacidade;

    if(rendimento > distancia) {
      gasto = distancia / consumo;
      resto = capacidade - (distancia / consumo);
    } else {
      while(rendimento < distancia) {
        capacidade += capacidade;
        rendimento = consumo * capacidade;
        tanque++;
      }
      gasto = distancia / consumo;
      resto = capacidade - (distancia / consumo);
    }

    printf("\n\nNecessario reabastecer o tanque %i vezes.", tanque);
    printf("\nQuantidade minima de combustivel: %.2f L", gasto);
    printf("\nSobrou: %.2f L", resto);

    printf("\n\nDeseja repetir? [1] - sim, [2] - nao\n");
    scanf("%i", &repetir);
    fflush(stdin);
  } while (repetir != 2);

  return 0;
}