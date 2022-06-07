#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float num1, num2, calc;

  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  fflush(stdin);

  printf("\nDigite o segundo numero: ");
  scanf("%f", &num2);
  fflush(stdin);

  if (num1 == num2) {
    printf("\na) Os dois numeros sao iguais!");
  } else {
    if(num1 > num2) {
      printf("\na) O numero %.2f e o maior.\n", num1);
    } else {
      printf("\na) O numero %.2f e o maior.\n", num2);
    }

    calc = (num1 * num1) - (num2 * num2);

    printf("b) A diferenca de seus quadrados equivale a %.2f.", calc);
  }

  return 0;
}