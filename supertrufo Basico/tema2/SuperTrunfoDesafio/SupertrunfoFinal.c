#include <stdio.h>

int main() {
    char estado1 = 'A', estado2 = 'B';
    char cidade1[40] = "CidadeA", cidade2[40] = "CidadeB";
    char codigo1[3] = "A01", codigo2[3] = "A02";
    int populacao1 = 100000, populacao2 = 200000;
    float area1 = 1500.5, area2 = 2500.75;
    float pib1 = 50000.0, pib2 = 75000.0;
    int pontosturisticos = '1', pontosturisticos2 = '2';

    //Entrada e Saida de dados da carta 1
    
              printf("\n=== Carta 1 ===\n"); 
              
    printf("qual seu Estado?:");
    scanf("%c", &estado1);
    printf("qual sua Cidade?:");
    scanf("%s", &cidade1);
    printf("qual seu Codigo?:");
    scanf("%s", &codigo1);
    printf("qual sua População?:");
    scanf("%d", &populacao1);
    printf("qual sua Área?:");
    scanf("%f", &area1);
    printf("qual seu PIB?:");
    scanf("%f", &pib1);
    printf("qual seus Pontos Turísticos?:");
    scanf("%d", &pontosturisticos);

     printf("\n=== Carta 1 ===\n"); 

     //Exibição dos dados da carta 1 no terminal 
    
     printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

        //Carta 1 finalizada
    
         printf("\n=== Carta 2 ===\n");
    //Entrada e Saida de dados da carta 2

    printf("Qual seu Estado?:");
    scanf(" %c", &estado2);
    printf("Qual sua Cidade?: ");
    scanf("%s", cidade2);
    printf("Qual seu Código?: ");
    scanf("%s", codigo2);
    printf("Qual sua População?: ");
    scanf("%d", &populacao2);
    printf("Qual sua Área?: ");
    scanf("%f", &area2);
    printf("Qual seu PIB?: ");
    scanf("%f", &pib2);
    printf("Qual seus Pontos Turísticos?: ");
    scanf("%d", &pontosturisticos2);

    printf("\n=== Carta 2 ===\n"); 
    
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

     //Exibição dos dados da carta 2 no terminal
    return 0;


}