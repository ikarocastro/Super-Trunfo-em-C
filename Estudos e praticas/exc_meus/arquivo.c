#include <stdio.h>

int main() {

        char nomer [20];
        int idade;
        
        printf("Digite seu nome: ");
        scanf("%s", nomer);
        printf("Ola, %s! Bem-vindo ao jogo Super Trunfo!\n", nomer);
    
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        
        if (idade < 18) {
            printf("Desculpe, %s. Você precisa ter pelo menos 18 anos para jogar.\n", nomer);
            return 0;
        }else{
            printf("Idade verificada. Vamos começar o jogo, %s!\n", nomer);
        }
    
        return 0;
}