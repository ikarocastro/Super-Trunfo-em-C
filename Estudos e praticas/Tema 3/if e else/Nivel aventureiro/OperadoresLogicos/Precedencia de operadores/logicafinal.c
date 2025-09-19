#include <stdio.h>

int main () {

        int idade = 20;
        float altura = 1.75;

        //idade >= 18 => sim, então verdadeira!
        //idade <= 30 => sim, então verdadeira!
        //Resposta: Verdadeira && Verdadeira => verdadeira
        //Verdadeira && altura > 1.75
        //Verdadeiro && Verdadeiro => Verdadeiro! no (&&) E comercial 


        if (idade >= 18 && idade <= 30 && altura > 1.70){
            printf("Você está na faixa estária e tem a altura adequada!");

        }else {
            printf("Você não atende aos critérios\n");

        }

}