/*
    24. Faça um programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo. Observando os termos no plural a colocação do "e", da vírgula entre outros.
Exemplo: 326 - 3 centenas, 20 dezenas e 6 unidades - 1 dezena e 2 unidades
Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num1;

    prinf("Digite um número: \n");
    scanf("%i", &num1);
    fflush(stdin);

    if (num1 >= 1000) {
        printf("Valor invalido, por favor insira um valor menor que 1000.");
        return 0;
    }

    int aux = num1;

    int centenas = num1 / 100;
    num1 %= 100;

    int dezenas = num1 / 10;
    num1 %= 10;

    int unidades = num1 / 1;

    printf("%i:\nCentenas: %i\nDezenas: %i\nUnidades: %i\n" aux, centenas, dezenas, unidades);
    
    return 0;
}