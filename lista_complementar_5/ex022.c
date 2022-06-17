/*
  A seqüência Fibonacci e uma seqüência matemática em que todos os números a 
  partir do terceiro são formados pela soma dos dois números que o precedem. 
  O primeiro e o segundo número são respectivamente 0 e 1. F.U.P que tenha uma 
  função que  pergunte quantos números da seqüência Fibonacci o usuário deseja 
  e uma função que gere a seqüência dos n primeiros números pedidos.
  Exemplo: 0 1 1 2 3 5 8 13 21 34 55...}
*/

#include <stdio.h>
#include <stdlib.h>

void geraFibonacci(int quantidade) {
  int r, f1 = 0, f2 = 1;

  printf("0, 1, ");
  while ((quantidade - 2) > 0) {
    r = f1 + f2;
    printf("%i, ", r);
    if(f1 < f2) {
      f1 = r;
    } else {
      f2 = r;
    }
    quantidade--;
  }
}

int main(void) {
  int quantidade;

  printf("Digite a quantidade de numeros: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  geraFibonacci(quantidade);

  return 0;
}