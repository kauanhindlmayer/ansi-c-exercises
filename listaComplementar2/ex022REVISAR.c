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
    int opcao1, opcao2;

    printf("Escolha um dos seguintes animais:\nleao, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato, aguia, tartaruga, crocodilo e cobra.\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("Opcoes:\n[1] - Mamiferos\n[2] - Aves\n[3] - Repteis\n");
    scanf("%i", &opcao1);
    fflush(stdin);

    if (opcao1 == 1){
        printf("Opcoes:\n[1] - Quadrupede\n[2] - Bipede\n[3] - Voadores\n[4] - Aquaticos");
        scanf("%i", &opcao2);
        fflush(stdin);

    } else if (opcao1 == 2) {
        printf("------------------------------------------\n");

    } else (opcao1 == 3) {
        printf("------------------------------------------\n");
    }

    return 0;
}