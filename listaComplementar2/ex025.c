/*
    25. Faça um programa que efetue conversões de medidas:
 	1-metros para centímetros
 	2-centímetros para metros 
 	3-dias para horas 
 	4-horas para dias 
 	5-km/h para milhas/h (1,684)
 	6-milhas/h para km/h
 	7-Celsius para Fahrenheit
 	8-Farenheit para Celsius
 	9-Kg para arroba (15)
    10-arroba para Kg  
    11-polegada para cm (2,75)
    12-cm para polegada
    13-palmo para centímetros (22)
    14-centímetros para palmos
    15-pé para centímetros (33)
    16-cm para pé
    17-nó para km/h (1,852)
    18-km/h para nós
    19-côvado para cm (66)
    20-cm para côvado
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

    int conversor, valor;
    
    printf("-------------------MENU-------------------\n");
    printf("[1] - Metros para centimetros\n");
    printf("[2] - Centimetros para metros\n");
    printf("[3] - Dias para horas\n");
    printf("[4] - Horas para dias\n");
    printf("[5] - Km/h para milhas/h\n");
    printf("[6] - Milhas/h para Km/h\n");
    printf("[7] - Celsius para Fahrenheit\n");
    printf("[8] - Farenheit para Celsius\n");
    printf("[9] - Kg para arroba\n");
    printf("[10] - Arroba para Kg\n");
    printf("[11] - Polegada para cm\n");
    printf("[12] - Cm para polegada\n");
    printf("[13] - Palmo para centimetros\n");
    printf("[14] - Centimetros para palmos\n");
    printf("[15] - Pé para centimetros\n");
    printf("[16] - Cm para pe\n");
    printf("[17] - Nó para km/h\n");
    printf("[18] - Km/h para nos\n");
    printf("[19] - Covado para cm\n");
    printf("[20] - Cm para covado\n");
    printf("------------------------------------------\n");
    printf("Escolha umas das conversoes acima:\n");
    scanf("%i", &conversor);
    fflush(stdin);

    if (conversor == 1) {
        printf("Digite uma valor em metros: \n");
        scanf("%i", &valor);
        fflush(stdin);

        int MetrosParaCentimetros = valor * 100;

        printf("%im em centimetros equivale a %icm\n", valor, MetrosParaCentimetros);
    } else if (conversor == 2) {
        printf("Digite uma valor em centimetros: \n");
        scanf("%i", &valor);
        fflush(stdin);

        int CentimetrosParaMetros = valor / 100;;

        printf("%icm em metros equivale a %im.\n", valor, CentimetrosParaMetros);

    } else if (conversor == 3) {
        printf("Digite uma valor em dias: \n");
        scanf("%i", &valor);
        fflush(stdin);

        int DiasParaHoras = valor * 24;

        printf("%i dias equivale a %i horas.\n", valor, DiasParaHoras);
    } else if (conversor == 4) {
        printf("Digite uma valor em horas: \n");
        scanf("%i", &valor);
        fflush(stdin);

        float HorasParaDias = valor / 24;

        printf("%i horas equivale a %.1f dias.\n", valor, HorasParaDias);
    } else if (conversor == 5) {
        printf("Digite uma valor em Km/h: \n");
        scanf("%i", &valor);
        fflush(stdin);

        float kmParaMilhas = valor * 1.684;

        printf("%i Km/h equivale a %.1f milhas.\n", valor, kmParaMilhas);
    } else if (conversor == 6) {
        printf("Digite uma valor em milhas: \n");
        scanf("%i", &valor);
        fflush(stdin);

        float MilhasParaKm = valor / 1.684;

        printf("%i milhas equivale a %.1f Km/h.\n", valor, MilhasParaKm);
    }

    


    return 0;
}