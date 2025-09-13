#include <stdio.h>

int main() {                                //ALterações 09/09/2024
                                            //Alterações = troquei as coparações
    char estado1, estado2;
    char  codigo1[12], codigo2[12];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; //Trocamos int por unsigned long int para suportar populações maiores
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float Superpoder1, Superpoder2; //Adicionamos o SuperPoder como um atributo das cartas


     printf("\n=== Carta 1 ===\n"); 

    printf("qual seu Estado?:");
    scanf(" %c", &estado1);
    printf("qual sua Cidade?:");
    scanf("%s", cidade1);
    printf("qual seu Codigo?:");
    scanf("%s", codigo1);
    printf("qual sua População?:");
    scanf("%lu", &populacao1);          //Troquei o %d por %lu
    printf("qual sua Área?:");
    scanf("%f", &area1);
    printf("qual seu PIB?:");
    scanf("%f", &pib1);
    printf("qual seus Pontos Turísticos?:");
    scanf("%d", &pontosturisticos1);
 
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;                                                   //Adicionei novos calculos
    Superpoder1 = populacao1 + area1 + pontosturisticos1 +
                     pib1 + pibpercapita1 + (1.0 / densidadepopulacional1);


        printf("\n=== Carta 1 ===\n"); 
    
        //Exibição dos dados da carta 1 no terminal 
        
        printf("Estado: %c\n", estado1);    
        printf("Cidade: %s\n", cidade1);
        printf("Código: %s\n", codigo1);
        printf("População: %lu\n", populacao1);         //Troquei o %d por %lu
        printf("Área : %.2f \n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %.2f\n", pibpercapita1);
        printf("SuperPoder da carta 1: %.2f\n", Superpoder1);                               //modifiquei essa linha
    

        //Carta 1 finalizada

        printf("\n===== Carta 2 ===\n");

    //Entrada e Saida de dados da carta 2
    printf("Qual seu Estado?:");
    scanf(" %c", &estado2);
    printf("Qual sua Cidade?: ");
    scanf("%s", cidade2);
    printf("Qual seu Código?: ");
    scanf("%s", codigo2);
    printf("Qual sua População?: ");
    scanf("%lu", &populacao2);          //Troquei o %d por %lu
    printf("Qual sua Área?: ");
    scanf("%f", &area2);
    printf("Qual seu PIB?: ");
    scanf("%f", &pib2);
    printf("Qual seus Pontos Turísticos?: ");
    scanf("%d", &pontosturisticos2);
    
    //Adicionando os cálculos para a carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;                                                   //Adicionei novos calculos
    Superpoder2 = populacao2 + area2 + pontosturisticos2 +
                     pib2 + pibpercapita2 + (1.0 / densidadepopulacional2);
    
    printf("\n=== Carta 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);         //Troquei o %d por %lu
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("SuperPoder da carta 2: %.2f\n", Superpoder2);    
    //Exibição dos dados da carta 2 no terminal

       
    printf("\n=== Comparações ===\n");
   
        
                //Obs modificar as comparações para depois
                //Obs Já modifiquei as comparações       
        
                // 1 = Carta vence
                // Comparações
                // 2 = Carta 2 vence

   
printf("Populção: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu!" :
               (populacao2 > populacao1) ? "Carta 2 venceu!" :
                                           "Empate em População!");

printf("Area: %s\n", (area1 > area2) ? "Carta 1 venceu!" :
               (area2 > area1) ? "Carta 2 venceu!" :
                                 "Empate em Área!");

printf("Pib: %s\n", (pib1 > pib2) ? "Carta 1 venceu!" :
               (pib2 > pib1) ? "Carta 2 venceu !" :
                               "Empate em PIB!");

printf("Pontos Turisticos: %s\n", (pontosturisticos1 > pontosturisticos2) ? "Carta 1 venceu!" :
               (pontosturisticos2 > pontosturisticos1) ? "Carta 2 venceu!" :
                                                        "Empate em Pontos Turísticos!");

printf("Pib per Capita: %s\n", (pibpercapita1 > pibpercapita2) ? "Carta 1 venceu!" :
               (pibpercapita2 > pibpercapita1) ? "Carta 2 venceu!" :
                                                 "Empate em PIB per Capita!");

// Densidade populacional (menor vence)
printf("Densidade Populaconal: %s\n", (densidadepopulacional1 < densidadepopulacional2) ? "Carta 1 venceu!" :
               (densidadepopulacional2 < densidadepopulacional1) ? "Carta 2 venceu!"  :
                                                                  "Empate em Densidade Populacional!");

printf("Super Poder: %s\n", (Superpoder1 > Superpoder2) ? "Carta 1 venceu!" : 
               (Superpoder2 > Superpoder1) ? "Carta 2 venceu !" :
                                             "Empate em Super Poder!");
  
    //exibição das comparações no terminal

                                             return 0;  

}