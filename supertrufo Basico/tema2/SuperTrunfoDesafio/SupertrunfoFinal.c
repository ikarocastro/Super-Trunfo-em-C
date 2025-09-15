#include <stdio.h>

int main() {
    char estado1, estado2;
    char cidade1[40], cidade2[40];
    char codigo1[5], codigo2[5];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos, pontosturisticos2;

    //Entrada e Saida de dados da carta 1 e carta 2
    
            printf("\n=== Carta 1 ===\n"); 
              
    printf("qual seu Estado?:");
    scanf("%c", &estado1);
    printf("qual sua Cidade?:");
    scanf("%s", &cidade1);
    printf("qual seu Codigo?:");
    scanf("%s", codigo1);
    printf("qual sua População?:");
    scanf("%d", &populacao1);
    printf("qual sua Área?:");
    scanf("%f", &area1);
    printf("qual seu PIB?:");
    scanf("%f", &pib1);
    printf("qual seus Pontos Turísticos?:");
    scanf("%d", &pontosturisticos);

           printf("\n=== Carta 2 ===\n");

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

    

     //Exibição dos dados da carta 1 e carta 2 no terminal 
    
        printf("\n=== Carta 1 ===\n"); 

     printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

        //Carta 1 finalizada
    
  
    printf("\n=== Carta 2 ===\n"); 
    
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

        //carta 2 finalizada

     //Exibição dos dados da carta 2 no terminal
   
     return 0;


}