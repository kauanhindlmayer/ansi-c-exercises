#ifndef _CALCULASEGUNDOS_H
#define _CALCULASEGUNDOS_H

void calculaSegundos(int valor) {

  int horas, minutos, segundos;

  horas = valor / 3600;
  minutos = (valor % 3600) / 60;
  segundos = (valor % 3600) % 60;

  printf("\nHorario formatado: %i/%i/%i", horas, minutos, segundos);
}

#endif