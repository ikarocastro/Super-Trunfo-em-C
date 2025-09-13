#include <stdio.h>

int main(){                                        //Alterações 12/09/25

    //entrada de variaveis!

    char estado1, estado2;
    char cidade1[20], cidade2[20];
    char  codigo1[12], codigo2[12];
    unsigned long int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float Superpoder1, Superpoder2; 

        //Entrada de dados da carta 1

        printf("\n=== Carta 1 ===\n"); 

    printf("qual seu Estado?:");
    scanf(" %c", &estado1);
    printf("qual sua Cidade?:");
    scanf("%s", cidade1);
    printf("qual seu Codigo?:");
    scanf("%s", codigo1);
    printf("qual sua População?:");
    scanf("%lu", &populacao1);          
    printf("qual sua Área?:");
    scanf("%f", &area1);
    printf("qual seu PIB?:");
    scanf("%f", &pib1);
    printf("qual seus Pontos Turísticos?:");
    scanf("%d", &pontosturisticos1);

        //Calculos da Carta 1
    
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;                                          
    Superpoder1 = populacao1 + area1 + pontosturisticos1 +
                     pib1 + pibpercapita1 + (1.0 / densidadepopulacional1);



        printf("\n=== Carta 1 ===\n"); 
    
        //Exibição dos dados da carta 1 no terminal 
        
        printf("Estado: %c\n", estado1);    
        printf("Cidade: %s\n", cidade1);
        printf("Código: %s\n", codigo1);
        printf("População: %lu\n", populacao1);         
        printf("Área : %.2f \n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %.2f\n", pibpercapita1);
        printf("SuperPoder da carta 1: %.2f\n", Superpoder1);                              
    


}