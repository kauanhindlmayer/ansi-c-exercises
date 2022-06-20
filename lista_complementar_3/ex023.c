/*
  Faça um programa que de acordo com a velocidade do veículo mude as marchas. 
  O usuário informa a velocidade atual e o programa apresenta a marcha correspondente 
  a velocidade, conforme instruções a seguir:
    a. Quando a velocidade estiver menor do que 30 km/h, apresente na tela o número 1. 
    b. Quando a velocidade estiver entre 30 km/h e 40 km/h, apresente na tela o número 2. 
    c. Quando a velocidade estiver entre 40 km/h e 60 km/h, apresente na tela o número 3. 
    d. Quando a velocidade estiver entre 60 km/h e 80 km/h, apresente na tela o número 4. 
    e. Quando a velocidade estiver acima de 80 km/h, apresente na tela o número 5. 
    f. Quando a velocidade for 0 (zero) apresente na tela “Veículo parado” e termine o programa. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float velocidade;
  
  do {
    printf("Digite a velocidade atual: ");
    scanf("%f", &velocidade);
    fflush(stdin);

    if(velocidade <= 30) {
      printf("[Marcha 1]\n");
    } else if(velocidade <= 40) {
      printf("[Marcha 2]\n");
    } else if(velocidade <= 60) {
      printf("[Marcha 3]\n");
    } else if(velocidade <= 80) {
      printf("[Marcha 4]\n");
    } else {
      printf("[Marcha 5]\n");
    }
  } while (velocidade != 0);

  if (velocidade == 0) printf("Veiculo parado!");

  return 0;
}