/*
  Temos dois vetores A e B, com 10 valores cada. Elabore um programa que 
  armazene num vetor C o valor de cada elemento de A elevado ao quadrado, e 
  num vetor D o valor de cada elemento de A multiplicado pelo elemento corresponde em B.

  Exemplo:  	A[1]	 B[1]	    C[1]	             D[1]
                2     3	     2*2 = 4             2*3=6
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int vetorA[10], vetorB[10], vetorC[10], vetorD[10], i;

  printf("Entre com os elementos do Vetor A\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);

    vetorC[i] = vetorA[i] * vetorA[i];
  }

  printf("Entre com os elementos do Vetor B\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorB[i]);
    fflush(stdin);
  }

  printf("\nVetor C: ");
  for(i = 0; i < 10; i++) {
    printf("%i, ", vetorC[i]);
  }

  printf("\nVetor D: ");
  for(i = 0; i < 10; i++) {
    vetorD[i] = vetorA[i] * vetorB[i];
    printf("%i, ", vetorD[i]);
  }

  return 0;
}