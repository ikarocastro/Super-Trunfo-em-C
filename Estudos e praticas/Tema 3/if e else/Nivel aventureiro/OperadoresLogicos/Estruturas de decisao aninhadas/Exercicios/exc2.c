#include <stdio.h>

int main() {

    int idade;
    float renda;
    int dependentes = 2;

//Condições
// A primeira condição idade do usuário está entre 18 a 65 anos.
// A segunda condição se a renda do usuário é menor que 3000.
// A terceira condição verifica se o número de dependentes é maior que 2.

printf("Digite sua idade:");
scanf("%d", &idade);
printf("Digite sua renda:");
scanf("%f", &renda);
printf("Digite o numero de dependentes:");
scanf("%d", &dependentes);


if (idade >= 18 && idade <= 65){
    if (renda < 3000)
{       if (dependentes >= 2)
{
    printf("Voce atende o criterio dependente!\n");
}else{
    printf("Voce nao atende o criterio dependente!\n");
}

   printf("Voce atende o criterio renda!\n");
}else{
    printf("Voce nao atende o criterio renda!\n");
}

    printf("Voce atende o criterio idade!\n");
}else{
    printf("voce nao atende a criterio idade!\n");
}





}