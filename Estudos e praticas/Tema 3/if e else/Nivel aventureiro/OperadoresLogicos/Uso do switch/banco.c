#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.0;
    float deposito;
    char agencia[30];
    int contabancaria;
    int saque;


    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu saldo é : R$%2.f\n", saldo);
        break;
    case 2:
        printf("Quanto vai ser o deposito?:\n");
        printf("Digite a agência: \n");
        printf("Digite sua conta: \n");
        break;
    case 3:
        printf("digite um valor para saque:\n");
        break;    
    
    default:
        printf("opçao invalida!\n");
        break;
    }


}