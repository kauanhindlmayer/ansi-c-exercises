#ifndef _FORMATAHORARIO_H
#define _FORMATAHORARIO_H

void formataHorario(int horas, int minutos, int segundos) {

  printf("\nHorario formatado em segundos: %i", (horas * 3600) + (minutos * 60) + segundos);
}

#endif