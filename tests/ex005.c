#include <stdio.h>
#include <stdlib.h>

#define S        10

int main(void) {

  char ceu[S+1]={'n','n','n','l','s','s','s','s','s','l','l','l','l'};
  int horario[S]={0,2,4,6,8,10,12,14,16,18,20,22,0};
  float temp[S]={ 15,16,16,16,16,21,29,32,32,23,19,18,18};
  int umidade[S]={ 98,96,94,94,92,74,55,46,49,78,88,89,93};

  int i, menor, menorIndex, menorTempIndex, teste = 0;
  float menorTemp;

  system("clear");

  printf("\na) qual é o horário de menor umidade?");
  menor = umidade[0];
  for(i = 0; i < S; i++) {
    if(umidade[i] <= menor) {
      menor = umidade[i];
      menorIndex = i;
    }
  }
  printf("\nR.: %i horas.", horario[menorIndex]);

  printf("\nb) o item a ocorre no horário com sol no céu?");
  ceu[menorIndex] == 's' ? printf("\nR.: Sim.") : printf("\nR.: Nao.");

  printf("\nc) qual é o horário da menor temperatura ?");
  menorTemp = temp[0];
  for(i = 0; i < S; i++) {
    if(temp[i] <= menor) {
      menorTemp = temp[i];
      menorTempIndex = i;
    }
  }
  printf("\nR.: %i horas.", horario[menorTempIndex]);

  printf("\nd) quando as temperaturas são inferiores a 20 graus, alguma delas tem céu com sol ?");
  for(i = 0; i < S; i++) {
    if(temp[i] < 20 && ceu[i] == 's') teste = 1;
  }
  teste == 1 ? printf("\nR.: Sim.") : printf("\nR.: Nao.");

  return 0;
}