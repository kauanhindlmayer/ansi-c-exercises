/*
  Foram anotadas as idades e alturas de 30 alunos. Faça um programa que 
  determine quantos alunos com mais de 13 anos possuem altura inferior à média 
  de altura desses alunos.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam        3

int main(void) {

  float idades[tam], alturas[tam], soma_altura = 0, media_altura;
  int acumulador = 0;


  for(int i = 0; i < tam; i++) {
    printf("\nDigite a idade %i: ", i + 1);
    scanf("%f", &idades[i]);
    fflush(stdin);

    printf("Digite a altura %i: ", i + 1);
    scanf("%f", &alturas[i]);
    fflush(stdin);

    soma_altura += alturas[i];
    media_altura = soma_altura / tam;
  }

  for(int i = 0; i < tam; i++) {
    if(idades[i] >= 13 && alturas[i] < media_altura) {
      acumulador++;
    }
  }
  
  printf("\n%i alunos com mais de 13 anos possuem altura inferior a media.", acumulador);

  return 0;
}