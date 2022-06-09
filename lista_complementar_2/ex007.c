/*
  Faça um programa que verifique se uma letra digitada é vogal ou consoante.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char letra;

	printf("Digite uma letra: ");
	scanf("%c", &letra);
	fflush(stdin);

	letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ? printf("A letra digitada e uma vogal!") : printf("A letra digitada e uma consoante!");    

	return 0;
}
