#include <stdio.h>

int main() {
    int variavel; //Essa vai ser a variavel de controle!

    printf("Digite um valor:");
    scanf("%d", &variavel);

    switch (variavel) {
  case 1:
    printf("Código a ser executado se variavel == valor1\n");
    break;
  case 2:
    printf("Código a ser executado se variavel == valor2\n");
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    printf("Código a ser executado se a Variavel não for 1 ou 2\n");
    }





}