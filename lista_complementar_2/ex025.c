/*
    Faça um programa que efetue conversões de medidas:
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

    int conversor;
    float valor;
    
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
    printf("[15] - Pe para centimetros\n");
    printf("[16] - Cm para pe\n");
    printf("[17] - No para km/h\n");
    printf("[18] - Km/h para nos\n");
    printf("[19] - Covado para cm\n");
    printf("[20] - Cm para covado\n");
    printf("------------------------------------------\n");
    printf("Escolha umas das conversoes acima:\n");
    scanf("%i", &conversor);
    fflush(stdin);

    if (conversor == 1) {
        printf("Digite um valor em metros: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float MetrosParaCentimetros = valor * 100;
        
        printf("------------------------------------------\n");
        printf("%.1fm em centimetros equivale a %.1fcm\n", valor, MetrosParaCentimetros);
    } else if (conversor == 2) {
        printf("Digite um valor em centimetros: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float CentimetrosParaMetros = valor / 100;;
        
        printf("------------------------------------------\n");
        printf("%.1fcm em metros equivale a %.1fm.\n", valor, CentimetrosParaMetros);
    } else if (conversor == 3) {
        printf("Digite um valor em dias: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float DiasParaHoras = valor * 24;

        printf("------------------------------------------\n");
        printf("%.1f dias equivale a %.1f horas.\n", valor, DiasParaHoras);
    } else if (conversor == 4) {
        printf("Digite um valor em horas: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float HorasParaDias = valor / 24;

        printf("------------------------------------------\n");
        printf("%.1f horas equivale a %.1f dias.\n", valor, HorasParaDias);
    } else if (conversor == 5) {
        printf("Digite um valor em Km/h: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float kmParaMilhas = valor * 1.684;

        printf("------------------------------------------\n");
        printf("%.1f Km/h equivale a %.1f milhas/h.\n", valor, kmParaMilhas);
    } else if (conversor == 6) {
        printf("Digite um valor em Milhas/h: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float MilhasParaKm = valor / 1.684;

        printf("------------------------------------------\n");
        printf("%.1f milhas/h equivale a %.1f Km/h.\n", valor, MilhasParaKm);
    } else if (conversor == 7) {
        printf("Digite um valor em Celsius: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float CelsiusParaFahrenheit = valor * 1.8 + 32;

        printf("------------------------------------------\n");
        printf("%.1f graus celsius equivalem a %.1f graus fahrenheit.\n", valor, CelsiusParaFahrenheit);
    } else if (conversor == 8) {
        printf("Digite um valor em Fahrenheit: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float FahrenheitParaCelsius = (valor - 32) / 1.8;

        printf("------------------------------------------\n");
        printf("%.1f graus fahrenheit equivalem a %.1f graus celsius.\n", valor, FahrenheitParaCelsius);
    } else if (conversor == 9) {
        printf("Digite um valor em quilogramas: \n");
        scanf("%f", &valor);
        fflush(stdin); 

        float KgParaArroba = valor / 15;

        printf("------------------------------------------\n");
        printf("%.1f Kg equivalem a %.1f @.\n", valor, KgParaArroba);
    } else if (conversor == 10) {
        printf("Digite um valor em Arrobas: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float ArrobasParaKg = valor * 15;

        printf("------------------------------------------\n");
        printf("%.1f @ equivalem a %.1f Kg.\n", valor, ArrobasParaKg);
    } else if (conversor == 11) {
        printf("Digite um valor em Polegadas: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float PolegadasParaCentimetros = valor * 2.54;

        printf("------------------------------------------\n");
        printf("%.1f polegadas equivalem a %.1f cm.\n", valor, PolegadasParaCentimetros);
    } else if (conversor == 12) {
        printf("Digite um valor em Centimetros: \n");
        scanf("%f", &valor);
        fflush(stdin); 

        float CentimetrosParaPolegadas = valor / 2.54;

        printf("------------------------------------------\n");
        printf("%.1f cm equivalem a %.1f Polegadas.\n", valor, CentimetrosParaPolegadas);
    } else if (conversor == 13) {
        printf("Digite um valor em Palmos: \n");
        scanf("%f", &valor);
        fflush(stdin); 

        float PalmosParaCentimetros = valor * 22.86;

        printf("------------------------------------------\n");
        printf("%.1f palmos equivalem a %.1f centimetros.\n", valor, PalmosParaCentimetros);
    } else if (conversor == 14) {
        printf("Digite um valor em Centimetros: \n");
        scanf("%f", &valor);
        fflush(stdin); 

        float CentimetrosParaPalmos = valor / 22.86;

        printf("------------------------------------------\n");
        printf("%.1f centimetros equivalem a %.1f palmos.\n", valor, CentimetrosParaPalmos);
    } else if (conversor == 15) {
        printf("Digite um valor em Pes: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float PesParaCentimetros = valor * 30.48;

        printf("------------------------------------------\n");
        printf("%.1f pes equivalem a %.1f centimetros.\n", valor, PesParaCentimetros);
    } else if (conversor == 16) {
        printf("Digite um valor em Centimetros: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float CentimetrosParaPes = valor / 30.48;

        printf("------------------------------------------\n");
        printf("%.1f centimetros equivalem a %.1f pes.\n", valor, CentimetrosParaPes);
    } else if (conversor == 17) {
        printf("Digite um valor em Nos/h: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float nosParaKm = valor * 1.854;

        printf("------------------------------------------\n");
        printf("%.1f nos/h equivalem a %.1f Km/h.\n", valor, nosParaKm);
    } else if (conversor == 18) {
        printf("Digite um valor em Km/h: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float KmParaNos = valor / 1.854;

        printf("------------------------------------------\n");
        printf("%.1f Km/h equivalem a %.1f Nos/h.\n", valor, KmParaNos);
    } else if (conversor == 19) {
        printf("Digite um valor em Covado: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float CovadoParaCentimetros = valor * 66;

        printf("------------------------------------------\n");
        printf("%.1f covados equivalem a %.1f centimetros.\n", valor, CovadoParaCentimetros);
    } else if (conversor == 20) {
        printf("Digite um valor em Centimetros: \n");
        scanf("%f", &valor);
        fflush(stdin);

        float CentimetrosParaCovados = valor / 66;

        printf("------------------------------------------\n");
        printf("%.1f centimetros equivalem a %.1f covados.\n", valor, CentimetrosParaCovados);
    }

    return 0;
}