#include <stdio.h>

int main() {

    int a = 5;
    int b = -10;
    int c = 1;

    //Primeira comparação
    //A > 0 => verdadeira!
    //B < 0 => verdadeira!
    //Agora sera testado
    // verdadeiro &&(E) verdadeiro => verdadeiro
    //agora a seguinte situação
    // Verdadeiro ||(OU) c == 0
    // Vai testar primeiro o do C no caso é falso!
    // Verdadeiro ||(OU) Falso => Verdadeiro , Como é um (OU) a resposta é verdadeiro


    if (a > 0 && b < 0 || c == 0)
    {
        printf("A condição e verdadeira!");
    }else{
        printf("A condição e falsa!");
    }
    
}