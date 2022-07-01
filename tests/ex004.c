#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, quantidade, i, primos = 0, divisores;

  printf("Digite um numero inicial: ");
  scanf("%i", &n);
  fflush(stdin);
  
  printf("Digite a quantidade de numeros primos: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  
  while(primos != quantidade) {
    divisores = 0;

    for(i = 1; i <= n; i++) {
      if(n % i == 0) {
        divisores++;
      }
    }
 
    if(divisores <= 2) {
      printf("\n%i", n);
      primos++;
    }
    n++;
  }

  return 0;
}