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
    int classe, opcaoMamifero, opcaoAve, opcaoReptil, opcao3;

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
        printf("O animal é o MORCEGO!");
    } else if (opcaoMamifero == 4) {
        printf("O animal é a BALEIA!");
    }
    
    if (opcaoQuadrupede == 1) {
        printf("O animal é o LEAO!");
    } else if (opcaoQuadrupede == 2) {
        printf("O animal é o CAVALO!");
    }

    if (opcaoBipede == 1) {
        printf("O animal é o HOMEM!");
    } else if (opcaoBipede == 2) {
        printf("O animal é o MACACO!");
    }

    return 0;
}