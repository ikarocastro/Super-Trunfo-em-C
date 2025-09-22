#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("\n=== Jogo de jokenpo ===\n");
    printf("Escolha uma opção:\n");
    printf("1. pedra\n");
    printf("2. papel\n");
    printf("3. tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand () % 3 + 1;
    
    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
    printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção invalida!");
        break;
    }

    switch (escolhaComputador)
    {
     case 1:
        printf("Computador: pedra\n ");
        break;
    case 2:
        printf("Computador: Papel\n ");
        break;
    case 3:
    printf("Computador: Tesoura\n ");
        break;
    default:
        printf("Opção invalida!\n"); 
        break;
    }
 
        if (escolhaJogador == escolhaComputador)
        {
            printf("### Empate ###\n");

        }else if ((escolhaJogador == 1) && (escolhaComputador == 3 ) ||
                    (escolhaJogador == 2) && (escolhaComputador == 1) ||
                    (escolhaJogador == 3) && (escolhaComputador == 2))
        {
            
            printf("*** Parabéns, Vitória do Jogador! ***\n");
            
         }else{
                printf("*** Infelizmente, Você perdeu! ***\n");
        
        }
        
        
        
    return 0;

}