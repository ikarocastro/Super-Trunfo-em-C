#include <stdio.h>

int main() {
        //Se a 'idade' for 18 ou mais, o programa imprime 'Você é maior de idade', No nosso exemplo, 20 é maior que 18, então a mensagem será exibida!

    int idade = 20;
    
    if (idade >= 18){
        printf("Voce é maior de idade!\n");
        printf("Fora IF");
    }
    
    //Obs: Se não colocar as chaves depois do if so vai ser executado a linha mais proxima

    //Exemplo
    //if (idade >= 18)
        //printf("Voce é maior de idade!"); //so será executada essa linha!
        //printf("Fora IF");
}