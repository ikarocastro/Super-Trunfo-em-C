#include <stdio.h>

int main()
{
    // primeira carta
    char nomeC[50] = "A01";         // NomeC para o numero da carta
    char nome[50] = "ceará";      // Nome para o nome do Estado
    char nome2[50] = "Fortaleza"; // Nome2 para o nome da cidade
    int população = 2000000;
    float Área = 1200.25;
    float PIB = 800000000;
    int pontosturisticos = 80;

    printf("qual carta?");
    scanf("%c", &nomeC);
    printf("A carta: %c\n", nomeC);


    printf("quanto é a população?:");
    scanf("%d", &população);
    printf("a população é: %d\n", população);

    printf("qual a área?:");
    scanf("%f", Área);
    printf("A área é: %f\n", Área);
    
    printf("Qual a cidade?: \n");
    scanf("%c", &nome2);
    printf("Cidade: %c\n", nome2);


}
