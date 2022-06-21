#ifndef _CALCULASEGUNDOS_H
#define _CALCULASEGUNDOS_H

int calculaSegundos(int horas, int minutos, int segundos) {

  int seconds = (horas * 3600) + (minutos * 60) + segundos;
  
  return seconds;
}

#endif
