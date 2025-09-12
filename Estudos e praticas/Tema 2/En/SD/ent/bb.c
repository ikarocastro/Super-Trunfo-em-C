#include <stdio.h>

int main() {
    int idade = 45;
    float altura = 1.90;
    char nome[20] = "eumesmo";

            //o %d serve para trazermos a variavel idade para o local de saida
        printf("qual e sua idade:");
            scanf("%d", &idade);
                printf("a idade é: %d\n", idade);

            //%f de float 
        printf("qual sua altura:");
            scanf("%f", &altura);
        printf("A altura é: %f2\n", altura);

        printf("qual é seu nome:");
            scanf("%s", nome);
        printf("meu nome é: %s", nome);
            //A variavel nome não precisa do & comercial!


}