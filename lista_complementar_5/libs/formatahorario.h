#ifndef _FORMATAHORARIO_H
#define _FORMATAHORARIO_H

typedef struct {
  int horas, minutos, segundos;
} Tempo;

Tempo formataHorario(int valor) {

  Tempo tempo;

  tempo.horas = valor / 3600;
  tempo.minutos = (valor % 3600) / 60;
  tempo.segundos = (valor % 3600) % 60;

  return tempo;
}

#endif