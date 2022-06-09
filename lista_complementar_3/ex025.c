/*
  Numa eleição existem três candidatos. Faça um programa que peça o número total 
  de eleitores. Peça para cada eleitor votar e ao final mostre o número de 
  votos de cada candidato e seu percentual com relação ao total de eleitores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int eleitores, voto;
  float c1 = 0, c2 = 0, c3 = 0;
   
  printf("Digite o numero de eleitores: ");
  scanf("%i", &eleitores);
  fflush(stdin);

  for(int i = 1; i <= eleitores; i++) {
    printf("[1] - Candidato 1\n");
    printf("[2] - Candidato 2\n");
    printf("[3] - Candidato 3\n");

    printf("Digite o numero correspondente ao candidato que deseja votar:\n");
    scanf("%i", &voto);
    fflush(stdin);

    switch(voto) {
      case 1:
        c1++;
        break;
      case 2:
        c2++;
        break;
      case 3:
        c3++;
        break;
    }
  }

  printf("Candidato 1 [%.2f%% dos votos]\n", (c1 / eleitores) * 100);
  printf("Candidato 2 [%.2f%% dos votos]\n", (c2 / eleitores) * 100);
  printf("Candidato 3 [%.2f%% dos votos]\n", (c3 / eleitores) * 100);

  return 0;
}