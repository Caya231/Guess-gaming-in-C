#include <stdio.h>
#include <stdlib.h>

void run() {
        char restart;
    printf("******************************************** \n");
    printf("*********JOGO DE ADIVINHAÇÃO**************** \n");
    printf("******************************************** \n");
    
    int max = 100;
    int min = 1;
    int numerosecreto = (rand() % 100) + 1;
    int again;
    int chute;
    
    do {
        printf("qual seu chute:");
        scanf("%d", &chute);
        
        
        if (chute < numerosecreto) {
            printf("Numero esta a cima \n");
        } else if (chute > numerosecreto) {
            printf("Numero esta a baixo \n");
        } else {
            printf("Voce acertou \n");
        }
    } while (chute != numerosecreto);
}

int main() {
    char restart_choice;

    do {
        run(); 
        printf("Quer jogar novamente? (Y/N): \n");
        scanf(" %c", &restart_choice);

    } while (restart_choice == 'y' || restart_choice == 'Y');

    printf("Saindo.\n");
    return 0;
}
