#include <stdio.h>

int main() {

    char estado1, estado2;
    char  codigo1[12], codigo2[12];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    
        //Entrada de dados carta 1

            printf("\n=== Entrada Carta 1 ===\n");
             
    printf("qual seu Estado?:");
    scanf(" %c", &estado1);
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
    scanf("%d", &pontosturisticos1);
   
        //Calculos carta 1 

    densidadepopulacional1 =  populacao1 / area1;
    pibpercapita1 =  pib1 / populacao1;

        printf("\n=== Carta 1 ===\n"); 
    
        //Exibição dos dados da carta 1 no terminal 
        
        printf("Estado: %c\n", estado1);    
        printf("Cidade: %s\n", cidade1);
        printf("Código: %s\n", codigo1);
        printf("População: %d\n", populacao1);
        printf("Área : %.2f \n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %.2f Bilhões de reais\n", pibpercapita1);
       
        //Carta 1 finalizada!


                //Começo da Carta 2

        printf("\n===== Carta 2 ===\n");

    //Entrada e Saida de dados da carta 2
    printf("Qual seu Estado?:");
    scanf(" %c", &estado2);
    printf("Qual sua Cidade?:");
    scanf("%s", &cidade2);
    printf("Qual seu Código?:");
    scanf("%s", codigo2);
    printf("Qual sua População?:");
    scanf("%d", &populacao2);
    printf("Qual sua Área?:");
    scanf("%f", &area2);
    printf("Qual seu PIB?:");
    scanf("%f", &pib2);
    printf("Qual seus Pontos Turísticos?:");
    scanf("%d", &pontosturisticos2);
    
        //Calculos Carta 2

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

         //Exibição dos dados da carta 2 no terminal

    printf("\n=== Carta 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f Bilhões de reais\n", pibpercapita2);
    
    //Carta 2 Finalizada!

  
    return 0;  

}