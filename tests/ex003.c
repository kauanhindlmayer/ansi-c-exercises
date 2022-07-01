#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  int aurelio[10] = { 5000, -500, -100, 200, -50, -100, 200, -300, -100, -30 }, jose[10] = { 5500, -200, 100, 200, -60, -100, 250, -200, -300, -90 };
  int i, gastosAurelio = 0, gastosJose = 0, ganhosAurelio = 0, ganhosJose = 0;
  float proporcionalAurelio, proporcionalJose;

  for(i = 0; i < 10; i++) {
    if(aurelio[i] < 0) gastosAurelio += aurelio[i];
    if(jose[i] < 0) gastosJose += jose[i];

    if(aurelio[i] > 0) ganhosAurelio += aurelio[i];
    if(jose[i] > 0) ganhosJose += jose[i];
  }

  printf("\na) Quem gasta mais em valores absolutos.");
  gastosAurelio > gastosJose ? printf("\nR.: Aurelio") : printf("\nR.: Jose");

  printf("\nb) Quanto proporcionalmente cada estudante gasta.");
  proporcionalAurelio = (gastosAurelio * -1) / ganhosAurelio;
  proporcionalJose = (gastosJose * -1) / ganhosJose;
  printf("\nR.: Jose - %.2f, Aurelio - %.2f", proporcionalJose, proporcionalAurelio);
  
  printf("\nc) Quem recebe mais ( sem olhar o valor do dia 1).");
  ganhosJose = ganhosJose - jose[0];
  ganhosAurelio = ganhosAurelio - aurelio[0];
  ganhosAurelio > ganhosJose ? printf("\nR.: Aurelio") : printf("\nR.: Jose");

  return 0;
}