#ifndef _FORMATAHORARIO_H
#define _FORMATAHORARIO_H

int formataHorario(int horas, int minutos, int segundos) {

  int horarioFormatado = (horas * 3600) + (minutos * 60) + segundos;
  
  return horarioFormatado;
}

#endif