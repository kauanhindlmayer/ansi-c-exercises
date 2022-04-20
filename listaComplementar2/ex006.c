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

    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Valor invalido!\n");
    } else {
        sexo == 'M' || sexo == 'm' ? printf("Masculino\n") : printf("Feminino\n");
    }


    return 0;
}