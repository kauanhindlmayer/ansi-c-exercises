/*
  Crie uma função para validar uma entrada de dados. A função receberá como 
  argumento um caractere, e deverá retornar  0 (zero) se o caractere não for 
  um digito decimal (0,1,2...9) ou 1 (um), se o caractere for decimal. Lembrando 
  que o código ASCII do 0 (zero) é 48 e do 9 (nove) 57.
*/

#include <stdio.h>
#include <stdlib.h>

int validaCaractere(char caractere) {
  int caractereDecimal = (int) caractere;

  if(caractereDecimal > 47 && caractereDecimal < 58) {
    return 0; 
  } else {
    return 1;
  }
}

int main(void) {
  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);
  fflush(stdin);

  int res = validaCaractere(caractere);

  res == 0 ? printf("\nCaractere decimal") : printf("\nCaractere nao decimal");

  return 0;
}