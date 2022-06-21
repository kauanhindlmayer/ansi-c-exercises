/*
  Faça um programa que leia um conjunto de linhas, contendo cada uma, o número 
  de um empregado, a data, a hora do inicio (horas, minutos e segundos) e a hora 
  do termino (horas, minutos e segundos) de uma determinada tarefa. A ultima 
  linha conterá o número do empregado 0 ou negativo. Calcule para cada empregado, 
  a duração da tarefa que ele executou, num mesmo dia, utilizando a função e 
  função anteriormente criadas para transformar horas, minutos e segundos em 
  segundos e vice-versa. Imprima para cada empregado, o seu número e a duração 
  de sua tarefa em horas, minutos e segundos. Faça uma função para ler, outra 
  para calcular e outra para imprimir.
*/

#include <stdio.h>
#include <stdlib.h>
#include "./libs/formatahorario.h"
#include "./libs/calculasegundos.h"

typedef struct {
  int id, dia, mes, ano;
  int horas_inicio, min_inicio, seg_inicio;
  int horas_termino, min_termino, seg_termino;

} Empregado;

void recebeDados(int quantidade) {

  Empregado empregado[quantidade];

  for(i = 0; i < quantidade; i++) {
  printf("\nDigite seu ID: ");
  scanf("%i", &empregado.id);
  fflush(stdin);

  printf("\nDigite a data (dd/mm/aaaa): ");
  scanf("%i/%i/%i", &empregado.dia, &empregado.mes, &empregado.ano);
  fflush(stdin);

  printf("\nDigite o horario de inicio da tarefa (hh:mm:ss): ");
  scanf("%i:%i:%i", &empregado.horas_inicio, &empregado.min_inicio, &empregado.seg_inicio);
  fflush(stdin);

  printf("\nDigite o horario de termino da tarefa (hh:mm:ss): ");
  scanf("%i:%i:%i", &empregado.horas_termino, &empregado.min_termino, &empregado.seg_termino);
  fflush(stdin);
  }

}

int main(void) {

  int quantidade, i;

  printf("Digite a quantidade de empregados: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  recebeDados(quantidade);

  return 0;
}