/*
  Faça um programa que transforme um número na base decimal ( 0..9 ) para 
  base hexadecimal ( 0..9,a,b,c,d,e,f). Este programa deverá ter uma função 
  que é chamada n vezes e devolve o resto da divisão por 16; este valor é 
  armazenado em um vetor que é invertido e então impresso.
		Ex:    	135 /16
	          resta 7      8     =>   135 na base 10 = 87 na base 16

*/

#include <stdio.h>
#include <stdlib.h>

int converteParaHexadecimal(int numero) {
  int divisao, tam = 0, resto[tam], i;

  divisao = numero / 16;
  resto[tam] = numero % 16;

  for(;divisao >= 16;) {
    tam++;
    resto[tam];
    divisao = numero / 16;
  }

  tam++;
  resto[tam] = divisao;

  printf("\nNumero %i convertido para hexadecimal: ", numero);
  for(i = tam; i >= 0; i--) {
    if(resto[i] > 10) {
      switch(resto[i]) {
			  case 10:
          printf("a");
          break; 		
			  case 11:
          printf("b");
          break;
			  case 12:
          printf("c");
          break;
			  case 13:
          printf("d");
          break;
			  case 14:
          printf("e");
          break;
			  case 15:
          printf("f");
          break;						 
		  }
    } else {
      printf("%i", resto[i]);
    }
  }
}

int main(void) {

  int numero;

  printf("Digite um numero na base decimal: ");
  scanf("%i", &numero);
  fflush(stdin);

  converteParaHexadecimal(numero);

  return 0;
}