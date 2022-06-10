/*
  As notas da disciplina de matemática foram anotadas em uma folha. Faça um 
  programa que leia esses dados, armazene-os e conte quantos alunos possuem 
  nota superior à média da turma.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float notas[10], soma = 0, media, notasAcima;
  int i ,j;

  for(i = 0; i < 10; i++) {
    printf("Digite a nota %i: ", i + 1);
    scanf("%lf", notas[i]);
    fflush(stdin);

    soma += notas[i];
  }

  media = soma / 10;
  
  for(j = 0; j < 10; j++) {
    if(notas[j] > media) {
      notasAcima++;
    }
  }  

  printf("\nNotas superiores a media: %.1lf", notasAcima);

  return 0;
}