#include <stdio.h>

int main() {
    char variavel; //Essa vai ser a variavel de controle!

    printf("Digite um valor:");
    scanf("%c", &variavel);

    switch (variavel) {
  case 'a':// tem que colocar entre aspas simples!
    printf("Código a ser executado se variavel == A\n");
    break;
  case 'b':
    printf("Código a ser executado se variavel == B\n");
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    printf("Código a ser executado se a Variavel não for 1 ou 2\n");
    }

}