#include <stdio.h>
#include <stdlib.h> //Implementa funções diversas!
#include <time.h>       //trata tipos data e hora
                    

//duas novas bibliotecas! para esse jogo

int main() {
  int opcao, regras;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

switch (opcao)
{
case 1:
    srand(time(0)); // a função srand(time(0)) é chamada para inicializar o gerador de números aleatórios com base no tempo atual. Isso garante que o gerador de números aleatórios produza sequências diferentes cada vez que o programa for executado.
    numeroSecreto = rand() % 10; //A variável numeroSecreto é atribuída a um número aleatório entre 1 e 10, gerado pela expressão rand() % 10 + 1. A função rand() gera um número aleatório inteiro, e o operador % 10 limita esse número ao intervalo de 0 a 9. Adicionando 1, obtemos um número entre 1 e 10.
    printf("Digite um numero de 0 a 9!:"); //O programa então solicita ao usuário que adivinhe o número secreto com a mensagem "Adivinhe o número (entre 1 e 10): ".
    scanf("%d", &palpite); // Usamos scanf para ler o palpite do usuário e armazená-lo na variável palpite.
    if (numeroSecreto == palpite)
    {
        printf("Voce acertou!\n");
    }else{
        printf("Voce errou!\n");
        printf("numero secreto: %d\n", numeroSecreto);
    }
      break;

case 2:
    printf("As regras são:\n");
    printf("Digite a opção relacionada as regras!");
    scanf("%d", &regras);
    switch (regras)
    {
    case 1:
    printf("1. Não pode trocar o numero!\n");
        
        break;
    case 2:
    printf("2. Nem escolher o do amigo!");
    
    break;
    
    default:
        printf("Opção invalida!");
        break;
    }
    break;

case 3:
    printf("Saindo do jogo!");
break;

default:
    printf("Opção invalida!");    
break;
}




}
