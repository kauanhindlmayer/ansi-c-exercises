/*
    22. Faça um programa que seja capaz de concluir qual dentre os animais seguintes foi escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco, morcego, baleia, avestruz, pingüim, pato, águia, tartaruga, crocodilo e cobra. 
Apresente as opções numeradas de acordo com a coluna.
Exemplo: 	
Opções: 1-Mamíferos, 2-Aves e 3-Répteis
Se for mamífero, apresente as outras opções: 1-Quadrúpede, 2-Bípede, 3-Voadores e 4-Aquáticos
Se for quadrúpede, apresente as opções possíveis: 1-Carnívoro e 2-Herbívoro
Se for herbívoro: O animal é o CAVALO
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int classe, opcaoMamifero, opcaoAve, opcaoReptil, opcaoBipede, opcaoQuadrupede, opcaoNaoVoador;

    printf("Escolha um dos seguintes animais:\nleao, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato, aguia, tartaruga, crocodilo e cobra.\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("O animal e:\n[1] - Mamiferos\n[2] - Aves\n[3] - Repteis\n");
    scanf("%i", &classe);
    fflush(stdin);
    printf("------------------------------------------------------------------------------------------------\n");

    if (classe == 1){
        printf("O mamifero e:\n[1] - Quadrupede\n[2] - Bipede\n[3] - Voadores\n[4] - Aquaticos\n");
        scanf("%i", &opcaoMamifero);
        fflush(stdin);
    } else if (classe == 2) {
        printf("A ave e:\n[1] - Rapina\n[2] - Aquatico\n[3] - Nao voador\n");
        scanf("%i", &opcaoAve);
        fflush(stdin);
    } else if (classe == 3) {
        printf("O reptil e:\n[1] - Carnivoro\n[2] - Com casco\n[3] - Sem patas\n");
        scanf("%i", &opcaoReptil);
        fflush(stdin);
    }
    
    if (opcaoMamifero == 1) {
        printf("O quadrupede e:\n[1] - Carnivoro\n[2] - Herbivoro\n");
        scanf("%i", &opcaoQuadrupede);
        fflush(stdin);
    } else if (opcaoMamifero == 2) {
        printf("O bipede e:\n[1] - Onivoro\n[2] - Frutifero\n");
        scanf("%i", &opcaoBipede);
        fflush(stdin);
    } else if (opcaoMamifero == 3) {
        printf("O animal e o MORCEGO!\n");
    } else if (opcaoMamifero == 4) {
        printf("O animal e a BALEIA!\n");
    }
    
    if (opcaoQuadrupede == 1) {
        printf("O animal e o LEAO!\n");
    } else if (opcaoQuadrupede == 2) {
        printf("O animal e o CAVALO!\n");
    }

    if (opcaoBipede == 1) {
        printf("O animal e o HOMEM!\n");
    } else if (opcaoBipede == 2) {
        printf("O animal e o MACACO!\n");
    }

    if (opcaoAve == 1) {
        printf("O animal e a AGUIA!\n");
    } else if (opcaoAve == 2) {
        printf("O animal e o PATO!\n");
    } else if (opcaoAve == 3) {
        printf("A ave e:\n[1] - Polar\n[2] - Tropical\n");
        scanf("%i", &opcaoNaoVoador);
        fflush(stdin);
    }

    if (opcaoNaoVoador == 1) {
        printf("O animal e PINGUIM!\n");
    } else if (opcaoNaoVoador == 2) {
        printf("O animal e o AVESTRUZ!\n");
    }

    if (opcaoReptil == 1) {
        printf("O animal e o CROCODILO!\n");
    } else if (opcaoReptil == 2) {
        printf("O animal e a TARTARUGA!\n");
    } else if (opcaoReptil == 3) {
        printf("O animal e a COBRA!\n");
    }

    return 0;
}