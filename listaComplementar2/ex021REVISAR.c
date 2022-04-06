/*
21. Faça um programa que gere o diagnostico para algumas doenças. 
Para isso e necessário fazer uma entrevista com o usuário, perguntando 
a ele se tem determinados sintomas:
    a. Infecção nos pulmões ( 0 - não 1 - sim)
    b. Temperatura (0 - normal 1 - anormal)
    c. Coriza (0 - não 1 - sim)
    d. Espirros (0 - não 1 - sim)
    e. Se o paciente tiver infecção nos pulmões e temperatura anormal o diagnostico é Pneumonia.
    f. Se o paciente tiver apenas um sintoma (qualquer) é resfriado.
    g. Se o paciente tiver dois ou mais sintomas que não sejam infecção nos pulmões e temperatura anormal simultaneamente, o diagnóstico é gripe.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int infeccao, temperatura, coriza, espirros;

    printf("Voce tem algum dos sintomas abaixo:\nInfeccao nos pulmoes?\n[0] - Nao [1] - Sim\n");
    scanf("\n%i", &infeccao);
    fflush(stdin);

    printf("Temperatura:\n[0] - Normal\n[1] - Anormal\n");
    scanf("\n%i", &temperatura);
    fflush(stdin);

    printf("Coriza:\n[0] -  Nao\n[1] - Sim\n");
    scanf("\n%i", &coriza);
    fflush(stdin);

    printf("Espirros:\n[0] -  Nao\n[1] - Sim\n");
    scanf("\n%i", &espirros);
    fflush(stdin);

    int somaDosSintomas = temperatura + espirros + coriza + infeccao;


    if (infeccao == 1 && temperatura == 1) {
        printf("O diagnostico e Pneumonia.\n");
    } else if (somaDosSintomas == 1) {
        printf("O diagnostico e Resfriado.\n");
    } else if (somaDosSintomas >= 2 &&  somaDosSintomas != temperatura && infeccao) {
        printf("O diagnostico e gripe.\n");
    }
    
    return 0;
}