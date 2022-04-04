/*
8.	Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1, n2, n3;

    printf("Digite um valor inteiro: ");
    scanf("%i", &n1);
    fflush(stdin);

    printf("Digite outro valor inteiro: ");
    scanf("%i", &n2);
    fflush(stdin);

    printf("Digite outro valor inteiro: ");
    scanf("%i", &n3);
    fflush(stdin);

    if (n1 > n2) {   
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }

    if (n1 > n3) {
        n1 = n1 + n3;
        n3 = n1 - n3;
        n1 = n1 - n3;
    }

    if (n2 > n3) {
        n2 = n2 + n3;
        n3 = n2 - n3;
        n2 = n2 - n3;
    }

    printf("%i, %i, %i", n1, n2, n3);
    
    return 0;
}
