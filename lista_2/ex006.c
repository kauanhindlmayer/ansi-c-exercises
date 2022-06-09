/*
  Faça um programa que verifique se a letra digitada for: F ou M e imprima uma 
  mensagem: masculino, feminino ou sexo inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char sexo;

  printf("Digite seu sexo (M/F): ");
  scanf("%c", &sexo);
  fflush(stdin);

  if(sexo == 'M' || sexo == 'm') {
    printf("\nMasculino.");
  } else if(sexo == 'F' || sexo == 'f') {
    printf("\nFeminino.");
  } else {
    printf("\nSexo invalido.");
  }

  return 0;
}