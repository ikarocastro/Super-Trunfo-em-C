#include <stdio.h>

int main() {

    float numero1 = 10.2;
    int numero2 = 10;

        printf("numero1 > numero2: %d\n", (int)numero1 > numero2); //True = 1 implicita, adicionando (int) antes da variavel numero1 conhecida como (casting) forçamos a conversao explicita resultando em 10 > 10 false = 0
        
        printf("numero1 == numero2: %d\n", (int)numero1 == numero2); //False = 0 implicita, adicionando (int) antes da variavel numero1 forçamos a conversao explicita

        //Ele usou a conversao implicita para comparar os valores

        //agora vamos fazer a conversao explicita



    return 0;

}