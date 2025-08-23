#include <stdio.h>

int main()
{
    // primeira carta
    char nomeC[12]; // NomeC para o numero da carta
    char nome[20];  // Nome para o nome do Estado
    char nome2[20]; // Nome2 para o nome da cidade
    int população;
    float Area;
    float PIB;
    int pontosturisticos;

    // segunda carta
    char carta2[12];// numero da carta
    char nome3[20];  // nome Estado
    char nomeCi[20]; // nome Cidade
    int população2;
    float Area2;
    float PIB2;
    int Pontosturisticos2;

          printf("\n=== Cadastro da Carta 1 ===\n");

        //Carta
    printf("Qual sua carta ?:");
    scanf("%s", &nomeC);
    printf("Minha Carta é: %s\n", nomeC);
    
    // Estado
    printf("qual o nome do Estado?:");
    scanf("%s", &nome);
    printf("O Estado é: %s\n", nome);

    // Cidade
    printf("Qual a Cidade?");
    scanf("%s", &nome2);
    printf("A Cidade é: %s\n", nome2);

    // População
    printf("quanto e a populaçao?:");
    scanf("%d", &população);
    printf("a população é: %d\n", população);

    // Area
    printf("Quanto é a Área?:");
    scanf("%f", &Area);
    printf("A Area é: %f\n", Area);

    // PIB
    printf("Quanto é o PIB?:");
    scanf("%f", &PIB);
    printf(" O PIB é: %f\n", PIB);

    // Pontos turísticos
    printf("Quantos pontos turísticos?:");
    scanf("%d", &pontosturisticos);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    // segunda carta

        printf("\n=== Cadastro da Carta 2 ===\n");

               //Carta2
    printf("Qual sua carta ?:");
    scanf("%s", &carta2);
    printf("Minha Carta é: %s\n", carta2);
    
            //Estado
    printf("qual o nome do Estado?:");
    scanf("%s", &nome3);
    printf("O Estado é: %s\n", nome3);
          
           //Cidade
    printf("qual o nome da cidade?:");
    scanf("%s", &nomeCi);
    printf("A Cidade é: %s\n", nomeCi);

          //População
    printf("quanto é a população?");
    scanf("%d", &população2);
    printf("A população e de: %d\n", população2);

         //Area
    printf("Quanto é a Area?:");
    scanf("%f", &Area2);
    printf("A Area é: %f\n", Area2);

        //PIB
    printf("Quanto é o PIB?:");
    scanf("%f", &PIB2);
    printf("O PIB é: %f\n", PIB2);

        //Pontos Turísticos
    printf("Quantos pontos turísticos?:");
    scanf("%d", &Pontosturisticos2);
    printf("Pontos Turísticos: %d\n", Pontosturisticos2);

    return 0;

}
