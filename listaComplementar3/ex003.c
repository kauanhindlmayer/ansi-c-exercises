/*
Faça um programa que leia dez números inteiros e calcule a diferença entre 
o maior e o menor número do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

    printf("Digite dez numeros inteiros:\n");
    scanf("%i %i %i %i %i %i %i %i %i %i", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
    fflush(stdin);

    int c,maior = num1;

    for (c = 1; c <= 10; c++) {
        if (num1 + c > maior) {
            maior = num2 + c;
        }
    }

    printf("%i", maior);
    
	
	return 0;
}