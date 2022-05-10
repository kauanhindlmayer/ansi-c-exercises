/*
    Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:
        a. A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada; 
        b. A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada; 
        c. A mensagem "Aprovado com Distinção", se a média for igual a 10. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    fflush(stdin);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    fflush(stdin);

    media = (nota1 + nota2 + nota3) / 3;

    if (media == 10) {
        printf("Aprovado com distinção!");
    } else if (media >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
        
    return 0;
}
