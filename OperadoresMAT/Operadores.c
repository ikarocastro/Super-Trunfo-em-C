#include <stdio.h>

int main() {
  /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
  
  */
  int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

        printf("Entre com o numero 1:");
         scanf("%d", &numero1);
        printf("Entre com o numero 2:");
            scanf("%d", &numero2);

    //Operação Soma
    soma = numero1 + numero2;
    
    // Operação Subtração
    subtracao = numero1 - numero2;
   
    //Operação Multiplicação
    multiplicacao = numero1 * numero2;
   
    //Operação Divisão
    divisao = numero1 / numero2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);


        return 0;


}