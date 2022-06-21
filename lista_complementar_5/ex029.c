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
  Tempo duracao;
} Empregado;

void imprimeDados(int quantidade, Empregado empregado[]) {
  int i;

  for(i = 0; i < quantidade; i++) {
    printf("\nCodigo do Empregado: %i", empregado[i].id);
    printf("\nDuracao da tarefa: %i:%i:%i", empregado[i].duracao.horas, empregado[i].duracao.minutos, empregado[i].duracao.segundos);
  }
}

int processaDados(int quantidade, Empregado empregado[]) {
  int i;

  for(i = 0; i < quantidade; i++) {
    int diferenca, segundosTermino, segundosInicio;

    segundosTermino = calculaSegundos(empregado[i].horas_termino, empregado[i].min_termino, empregado[i].seg_termino); 
    segundosInicio = calculaSegundos(empregado[i].horas_inicio, empregado[i].min_inicio, empregado[i].seg_inicio);

    diferenca = segundosTermino - segundosInicio;

    Tempo tempo = formataHorario(diferenca);
    empregado[i].duracao = tempo;
  }

  imprimeDados(quantidade, empregado);
}

void recebeDados(int quantidade) {

  Empregado empregado[quantidade];

  for(int i = 0; i < quantidade; i++) {
  printf("\nDigite seu ID: ");
  scanf("%i", &empregado[i].id);
  fflush(stdin);

  printf("\nDigite a data (dd/mm/aaaa): ");
  scanf("%i/%i/%i", &empregado[i].dia, &empregado[i].mes, &empregado[i].ano);
  fflush(stdin);

  printf("\nDigite o horario de inicio da tarefa (hh:mm:ss): ");
  scanf("%i:%i:%i", &empregado[i].horas_inicio, &empregado[i].min_inicio, &empregado[i].seg_inicio);
  fflush(stdin);

  printf("\nDigite o horario de termino da tarefa (hh:mm:ss): ");
  scanf("%i:%i:%i", &empregado[i].horas_termino, &empregado[i].min_termino, &empregado[i].seg_termino);
  fflush(stdin);
  }

  processaDados(quantidade, empregado);
}

int main(void) {

  int quantidade;

  printf("Digite a quantidade de empregados: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  recebeDados(quantidade);

  return 0;
}