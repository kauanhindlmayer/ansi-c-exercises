#ifndef _VALIDADATA_H
#define _VALIDADATA_H

int validaData(int dia, int mes, int ano) {
  if(ano <= 0) return 0;

  if(mes < 0 || mes > 12) return 0;

  if(mes == 2 && dia > 28) return 0;
  
  if((mes == 4 || mes == 6 || mes == 9 || mes == 12) && dia > 30) return 0;
   
  if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 11) && dia > 31) return 0;
  
  return 1;
}

#endif