/*
  É dada uma lista contendo datas de nascimento (somente o ano) de diversas 
  pessoas. Faça um programa para determinar a idade de cada pessoa e a idade 
  média do grupo.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam       5

int main(void) {

  float data_nasc[tam], idades[tam], soma = 0, media_idade;

  for(int i = 0; i < tam; i++) {
    printf("Digite a data de nascimento %i: ", i + 1);
    scanf("%f", &data_nasc[i]);
    fflush(stdin);

    idades[i] = 2022 - data_nasc[i];
    soma += idades[i];
    media_idade = soma / tam;
  }

  printf("\nIdade media do grupo: %.1f", media_idade);
  printf("\nIdade de cada membro: ");
  for(int i = 0; i < tam; i++) {
    printf("%.1f, ", idades[i]);
  }

  return 0;
}