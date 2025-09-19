#include <stdio.h>

int main() {

    int a = 5;
    int b = 10;
    int c = 1;

    //Primeira comparação
    //A > 0 => verdadeira!
    //B < 0 => Falsa!
    //Agora sera testado
    // verdadeiro &&(E) Falsa => Falsa
    //agora a seguinte situação
    // Falsa ||(OU) c == 0
    // Vai testar primeiro o do C no caso é falso!
    // Falso ||(OU) Falso => Falso , Como é um (OU) a resposta é Falsa pois mudou o valor da variável!


    if (a > 0 && b < 0 || c == 0)
    {
        printf("A condição e verdadeira!");
    }else{
        printf("A condição e falsa!");
    }
    
}