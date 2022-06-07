#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int codigo, opcao;

  printf("------------------- MENU DE EVENTOS -------------------\n");
  printf("Codigo do Evento:\tDescricao do Evento:\n");
  printf("[0]\t\t\t[Entra de pessoa nao autorizada]\n");
  printf("[1]\t\t\t[Maquina de producao parada]\n");
  printf("[2]\t\t\t[Materia-prima espalhada]\n");
  printf("[3]\t\t\t[Acidente de trabalho]\n");
  printf("[4]\t\t\t[Falta de luz]\n");
  printf("-------------------------------------------------------\n");

  printf("Informe o codigo do evento: ");
  scanf("%i", &codigo);
  fflush(stdin);

  switch(codigo) {
    case 0:
      printf("\nLigar para a segurança - ramal 0.");
      break;
    case 1:
      printf("\nLigar para manutenção - ramal 9.");
      break;
    case 2:
      printf("\nEsvaziar o recinto e proximidades");
      printf("\nInforme a manutenção: ramal 9.");
      break;
    case 3:
      printf("\nLigar para os bombeiros: 193"); // Comando alarme?
      
      printf("\nConseguiu ligar para os bombeiros? ([1] - sim, [2] - nao)\n");
      scanf("%i", &opcao);
      fflush(stdin);

      if (opcao == 1) {
        printf("OK!");
      } else if(opcao == 2) {
        printf("\nLigue para a segurança - ramal 0.");
      } else {
        printf("Resposta invalida!");
      }

      break;
    case 4:
      printf("\nEsvaziar o recinto e proximidades.");
      break;
    default:
      printf("\nCodigo de evento invalido!");
      break;
  }

  return 0;
}