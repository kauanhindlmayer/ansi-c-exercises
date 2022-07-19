#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int tamA, tamB, i, j, qtd_iguais, qtd_maiores;

  printf("\nDigite o tamanho do Vetor A: ");
  scanf("%i", &tamA);
  fflush(stdin);

  printf("\nDigite o tamanho do Vetor B: ");
  scanf("%i", &tamB);
  fflush(stdin);

  int vetorA[tamA], vetorB[tamB];

  printf("Entre com os valores do Vetor A\n"); // 1, 2, 3, 4, 50, 30
  for(i = 0; i < tamA; i++) {
    printf("Digite o valor %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  printf("\nEntre com os valores do Vetor B\n"); // 10, 2, 20, 40, 5
  for(i = 0; i < tamB; i++) {
    printf("Digite o valor %i: ", i + 1);
    scanf("%i", &vetorB[i]);
    fflush(stdin);
  }

  for(i = 0; i < tamA; i++) {
    qtd_maiores = 0;
    qtd_iguais = 0;

    for(j = 0; j < tamB; j++) {
      if(vetorA[i] == vetorB[j]) qtd_iguais++;
      if(vetorB[j] > vetorA[i]) qtd_maiores++;
    }
    printf("\nA[%i]=%i Total iguais em B=%i; Total de maiores em B=%i", i, vetorA[i], qtd_iguais, qtd_maiores);
  }

  return 0;
}