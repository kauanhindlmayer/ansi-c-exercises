/*
  26. Considere que um carro vai fazer uma viagem entre duas cidades 
  e que a distancia percorrida é informada (em Km). Informe também a 
  capacidade do reabastecer e o consumo médio (Km/l),  do veículo. 
  No inicio da viagem o carro esta com o reabastecer cheio.
    a. Deseja-se saber :
    b. Quantas vezes foi necessário reabastecer.
    c. Número de litros consumidos para percorrer a distancia indicada.
    d. Quantos litros restaram no reabastecer após a chegada ao destino.
    e. O programa deve permitir que o usuário execute esses cálculos quantas
    vezes ele quiser.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  float distancia, capacidade, consumo, gasto, reabastecer, resto;
  int opcao;

  do {
    printf("\nInforma distancia em quilometros: ");
    scanf("%f", &distancia); // 200
    fflush(stdin);

    printf("\nInforme a capacidade do reabastecer em litros: ");
    scanf("%f", &capacidade); // 50
    fflush(stdin);

    printf("\nInforme o consume médio em quilometros por litros: ");
    scanf("%f", &consumo); // 5
    fflush(stdin);

    gasto = distancia / consumo;

    if (capacidade >= gasto) {
      reabastecer = 0;
      resto = capacidade - gasto;
    } else {
      reabastecer = (gasto / capacidade) - 1;
      resto = (capcidade * consumo)
      
      // lógica de reabastecimento
    }

    printf("\n");
    printf("Necessario reabastecer %.2f vezes.\n", reabastecer);
    printf("Quantidade minima de combustivel: %.2f L\n", gasto);
    printf("Sobrou: %.2f L\n", resto);

    printf("\nDeseja repetir? [1] - Sim, [2] - Nao\n");
    scanf("%i", &opcao);
    fflush(stdin);
  } while (opcao != 2);

  return 0;
}