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
    printf("Escolha: \n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand () % 3 + 1;
    


    return 0;

}