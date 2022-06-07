/*
    Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
        a. Área Retângulo = base * altura
        b. Área Triângulo = base * altura/2
        c. Área do Círculo = pi * r * r
        d. Área do quadrado = lado * lado
        e. Área do trapézio = (lmaior + lmenor) * altura/2
        f. Sair
*/

#include <stdio.h>
#include <stdlib.h>

void operacoes (void);

int main(void){
    int novamente;

    do {
        operacoes();
        printf("\nDeseja fazer mais alguma operacao? \n[1] - Sim\n[2] - Nao\n\n");
        scanf("%i", &novamente);
        fflush(stdin);
    } while(novamente == 1);
    
    return 0;
}

void operacoes (void) {
    int operador;
    float base, altura, raio, ladoMaior, ladoMenor, resultado;

    printf("-----------------------------------------\n");
    printf("            FORMULARIO                   \n");
    printf("Digite qual formula você deseja saber:   \n");
    printf("-----------------------------------------\n");
    printf("[ 1 ] - Area do Retangulo                \n");
    printf("[ 2 ] - Area do Triangulo                \n");
    printf("[ 3 ] - Area do Circulo                  \n");
    printf("[ 4 ] - Area do Quadrado                 \n");
    printf("[ 5 ] - Area do Trapezio                 \n");
    printf("[ 6 ] - Sair                             \n");
    printf("Qual operacao você deseja fazer?         \n");
    scanf("%i", &operador);
    fflush(stdin);
    printf("-----------------------------------------\n");

    if (operador == 1) {
        printf("Area Retangulo = base * altura\n");

        printf("Digite a base do retangulo: ");
        scanf("%f", &base);
        fflush(stdin);

        printf("Digite a altura do retangulo: ");
        scanf("%f", &altura);
        fflush(stdin);

        resultado = (base * altura);

        printf("A area do retangulo equivale a %.1f.\n", resultado);
    } else if(operador == 2) {
        printf("Area Triangulo = base * altura/2\n");
        
        printf("Digite a base do triangulo: ");
        scanf("%f", &base);
        fflush(stdin);
        
        printf("Digite a altura do triangulo: ");
        scanf("%f", &altura);
        fflush(stdin);
        
        resultado = (base * altura)/2;

        printf("A area do triangulo equivale a %.1f.\n", resultado);
    } else if(operador == 3) {
        printf("Area do Circulo = pi * r * r\n");
        
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        fflush(stdin);

        resultado = 3.14 * (raio * raio);

        printf("O area do circulo equivale a %.1f.\n", resultado);
    } else if(operador == 4) {
        printf("Area do quadrado = lado * lado\n");
        
        printf("Digite lado do quadrado: ");
        scanf("%f", &base);
        fflush(stdin);
        
        resultado = (base * base);
        
        printf("O area do quadrado equivale a %.1f.\n", resultado);
    } else if (operador == 5){
        printf("Area do trapezio = (lmaior + lmenor) * altura/2\n");
        
        printf("Digite a medida do maior lado do trapezio: ");
        scanf("%f", &ladoMaior);
        fflush(stdin);
        
        printf("Digite a medida do menor lado do trapezio: ");
        scanf("%f", &ladoMenor);
        fflush(stdin);
        
        printf("Digite a altura do trapezio: ");
        scanf("%f", &altura);
        fflush(stdin);
        
        resultado = ((ladoMaior + ladoMenor) * altura)/2;
        
        printf("O area do trapezio equivale a %.1f.\n", resultado);
    } else {
        printf("Fim!\n");
    }
}

