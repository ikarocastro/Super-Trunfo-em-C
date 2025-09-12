#include <stdio.h>

int main() {
    // Estrutura para guardar dados de uma carta
    typedef struct {
        char estado;
        char codigo[4];
        char nome[30];
        unsigned long int populacao;
        float area;
        float pib;
        int pontos_turisticos;
        float densidade;
        float pib_per_capita;
        float super_poder;
    } Carta;

    Carta c1, c2;

    // Entrada dos dados da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &c1.estado);
    printf("Codigo: ");
    scanf("%s", c1.codigo);
    printf("Nome da cidade: ");
    scanf(" %s", c1.nome);
    printf("Populacao: ");
    scanf("%lu", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    // Entrada dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &c2.estado);
    printf("Codigo: ");
    scanf("%s", c2.codigo);
    printf("Nome da cidade: ");
    scanf(" %s", c2.nome);
    printf("Populacao: ");
    scanf("%lu", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);

    // Calculos da Carta 1
    c1.densidade = c1.populacao / c1.area;
    c1.pib_per_capita = c1.pib / c1.populacao;
    c1.super_poder = c1.populacao + c1.area + c1.pontos_turisticos +
                     c1.pib + c1.pib_per_capita + (1 / c1.densidade);

    // Calculos da Carta 2
    c2.densidade = c2.populacao / c2.area;
    c2.pib_per_capita = c2.pib / c2.populacao;
    c2.super_poder = c2.populacao + c2.area + c2.pontos_turisticos +
                     c2.pib + c2.pib_per_capita + (1 / c2.densidade);

    // Comparações
    printf("\n=== Resultados ===\n");
    printf("Populacao: %d\n", c1.populacao > c2.populacao); // maior vence
    printf("Area: %d\n", c1.area > c2.area);                 // maior vence
    printf("PIB: %d\n", c1.pib > c2.pib);                     // maior vence
    printf("Pontos Turisticos: %d\n", c1.pontos_turisticos > c2.pontos_turisticos); // maior vence
    printf("PIB per Capita: %d\n", c1.pib_per_capita > c2.pib_per_capita); // maior vence
    printf("Densidade Populacional: %d\n", c1.densidade < c2.densidade);   // menor vence
    printf("Super Poder: %d\n", c1.super_poder > c2.super_poder);          // maior vence

    return 0;
}