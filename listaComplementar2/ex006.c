/*
6.	Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: 
masculino, feminino ou sexo inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    char sexo;

    printf("Sexo (M/F): ");
    scanf("%c", &sexo);
    fflush(stdin);

    sexo == 'M' || sexo == 'm' ? printf("Masculino") : printf("Feminino");

    return 0;
}
