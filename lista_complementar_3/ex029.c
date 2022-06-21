/*
  Foi realizada uma pesquisa onde perguntou-se a cada um dos entrevistados o seguinte:
    a. clube de preferência   1 – Flamengo,	2 – Vasco, 3 – Botafogo, 4-Fluminense, 5-outro
    b. salário mensal
    c. procedência:	1 – Rio de Janeiro,	2 - Outras cidades
    d. Deseja-se saber
    e. o número de torcedores por clube
    f. médias salariais dos torcedores do Flamengo e também do Fluminense
    g. o número de pessoas nascidas fora do Rio de Janeiro que torcem para o Flamengo
    h. o número de pessoas entrevistadas
    Obs.: o número de pessoas entrevistadas é desconhecido
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int quantidade, i, clube, procedencia, flamengo = 0, fluminense = 0, vasco = 0, botafogo = 0, outro = 0, somaFlamengo = 0, somaFluminense = 0, flamengoDeFora = 0;
  float salario, salarioFlamengo, salarioFluminense;

  printf("Digite o numero de entrevistados: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  for(i = 0; i < quantidade; i++) {
    printf("\nQual seu clube de preferencia?");
    printf("\n[1] - Flamengo\n[2] - Fluminense\n[3] - Vasco\n[4] - Botafogo\n[5] - Outro\n");
    scanf("%i", &clube);
    fflush(stdin);

    clube == 1 ? flamengo++ : clube == 2 ? fluminense++ : clube == 3 ? vasco++ : clube == 4 ? botafogo++ : outro++;

    printf("\nQual seu salario mensal? R$ ");
    scanf("%f", &salario);
    fflush(stdin);

    if(clube == 1) somaFlamengo += salario;
    if(clube == 2) somaFluminense += salario;

    printf("\nQual sua procedencia?\n[1] - Rio de Janeiro\n[2] - Outro\n");
    scanf("%i", &procedencia);
    fflush(stdin);

    if(procedencia == 2 && clube == 1) flamengoDeFora++;
  }

  salarioFlamengo = (somaFlamengo / flamengo);
  salarioFluminense = (somaFluminense / fluminense);

  printf("\nClube\t\tTorcedores");
  // printf("\n--------------------------");
  printf("\nFlamengo\t\t%i", flamengo);
  printf("\nFluminense\t\t%i", fluminense);
  printf("\nVasco\t\t\t%i", vasco);
  printf("\nBotafogo\t\t%i", botafogo);
  printf("\nOutro\t\t\t%i\n", outro);
  printf("\nMedia salarial dos torcedores do Flamengo: R$%.2f", salarioFlamengo);
  printf("\nMedia salarial dos torcedores do Fluminense: R$%.2f", salarioFluminense);
  printf("\nQuantidade de torcedores do Flamengo que nasceram fora do Rio: %i", flamengoDeFora);
  printf("\nQuantidade de entrevistados: %i", quantidade);

  return 0;
}