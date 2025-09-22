#include <stdio.h>

int main() {                                //ALterações 23/09/2024
                                            //Alterações = Comecei o desafio 3
    char estado1, estado2;
    char  codigo1[12], codigo2[12];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float Superpoder1, Superpoder2; 
    int escolhaAtributo; //Variável para as comparações

                //Entrada e Saida de dados da carta 1

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
 
                //Calculos Carta 1
                
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
        printf("Área : %.2f km²\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %.2f Bilhões de reais\n", pibpercapita1);
        printf("SuperPoder da carta 1: %.2f\n", Superpoder1);                               
    

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
    scanf("%lu", &populacao2);          
    printf("Qual sua Área?: ");
    scanf("%f", &area2);
    printf("Qual seu PIB?: ");
    scanf("%f", &pib2);
    printf("Qual seus Pontos Turísticos?: ");
    scanf("%d", &pontosturisticos2);
    
    //Adicionando os cálculos para a carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;                                                   
    Superpoder2 = populacao2 + area2 + pontosturisticos2 +
                     pib2 + pibpercapita2 + (1.0 / densidadepopulacional2);
    
    printf("\n=== Carta 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);         
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f Bilhões de reais\n", pibpercapita2);
    printf("SuperPoder da carta 2: %.2f\n", Superpoder2);    
    //Exibição dos dados da carta 2 no terminal


                                // Campo de comparações

    printf("\n=== Comparações ===\n");
   
    
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SuperPoder\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &escolhaAtributo);

    printf("\nComparando %s (carta 1) x %s (carta 2)\n", cidade1, cidade2);

    switch (escolhaAtributo) {
        case 1: // População
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f vs %.2f\n", area1, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos: %d vs %d\n", pontosturisticos1, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) printf("Vencedor: %s\n", cidade1);
            else if (pontosturisticos2 > pontosturisticos1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade populacional (regra invertida)
            printf("Densidade: %.2f vs %.2f\n", densidadepopulacional1, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) printf("Vencedor: %s\n", cidade1);
            else if (densidadepopulacional2 < densidadepopulacional1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("PIB per Capita: %.2f vs %.2f\n", pibpercapita1, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) printf("Vencedor: %s\n", cidade1);
            else if (pibpercapita2 > pibpercapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 7: // SuperPoder
            printf("SuperPoder: %.2f vs %.2f\n", Superpoder1, Superpoder2);
            if (Superpoder1 > Superpoder2) printf("Vencedor: %s\n", cidade1);
            else if (Superpoder2 > Superpoder1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}