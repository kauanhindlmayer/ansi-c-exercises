/*
11. Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero. 
    a. O menu será como segue:
    [ 1 ] – Adição
    [ 2 ] – Subtração
    [ 3 ] – Multiplicação
    [ 4 ] – Divisão
    [ 5 ] – Fim
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float operando1, operando2, resultado;
    int operador;

    printf("Digite o primeiro operando: ");
    scanf("%f", &operando1);
    fflush(stdin);

    printf("Digite o segundo operando: ");
    scanf("%f", &operando2);
    fflush(stdin);

    printf("----------------------------------\n");
    printf("| [ 1 ] – Adição                 |\n");
    printf("| [ 2 ] – Subtração              |\n");
    printf("| [ 3 ] – Multiplicação          |\n");
    printf("| [ 4 ] – Divisão                |\n");
    printf("| [ 5 ] – Fim                    |\n");
    printf("----------------------------------\n");

    printf("Escolha a operação ser realizada com %.1f e %.1f: ", operando1, operando2);
    scanf("%i", &operador);
    fflush(stdin);

    if (operador == 1) {
        resultado = operando1 + operando2;
    } else if(operador == 2) {
        resultado = operando1 - operando2;
    } else if(operador == 3) {
        resultado = operando1 * operando2;
    } else if(operador == 4) {
        resultado = operando1 / operando2;
    } else {
        printf("Fim!");
    }

    printf("O resultado da operação entre %.1f e %.1f equivale a %.1f.", operando1, operando2, resultado);

    return 0;
}