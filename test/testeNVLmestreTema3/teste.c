#include <stdio.h>

/* --- Função auxiliar para limpar buffer stdin --- */
void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

/* Retorna o nome do atributo */
const char* nome_atributo(int op) {
    switch (op) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per Capita";
        case 7: return "SuperPoder";
        default: return "Desconhecido";
    }
}

/* Retorna o valor (em double) do atributo selecionado para a carta indicada */
double obter_valor_atributo(int atributo,
                           unsigned long populacao, float area, float pib, int pontos,
                           double densidade, double pibpercapita, double superpoder) {
    switch (atributo) {
        case 1: return (double)populacao;
        case 2: return (double)area;
        case 3: return (double)pib;
        case 4: return (double)pontos;
        case 5: return densidade;
        case 6: return pibpercapita;
        case 7: return superpoder;
        default: return 0.0;
    }
}

/* Compara dois valores segundo a regra do atributo (densidade invertida). */
int compara_valores(double v1, double v2, int atributo) {
    if (atributo == 5) { /* densidade: menor vence */
        if (v1 < v2) return 1;
        if (v2 < v1) return 2;
        return 0;
    } else { /* normal: maior vence */
        if (v1 > v2) return 1;
        if (v2 > v1) return 2;
        return 0;
    }
}

int main() {
    /* Variáveis */
    char estado1, estado2;
    char codigo1[12], codigo2[12];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    double densidade1, densidade2;
    double pibpercapita1, pibpercapita2;
    double superp1, superp2;
    int escolha1 = 0, escolha2 = 0;

    /* Entrada Carta 1 */
    printf("\n=== Carta 1 ===\n");
    printf("Estado: "); scanf(" %c", &estado1); limpar_buffer();
    printf("Cidade: "); scanf("%19s", cidade1); limpar_buffer();
    printf("Codigo: "); scanf("%11s", codigo1); limpar_buffer();
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontosturisticos1);

    densidade1 = area1 ? (double)populacao1 / area1 : 0.0;
    pibpercapita1 = populacao1 ? (double)pib1 / populacao1 : 0.0;
    superp1 = populacao1 + area1 + pontosturisticos1 + pib1 + pibpercapita1 +
              (densidade1 != 0 ? 1.0 / densidade1 : 0.0);

    /* Entrada Carta 2 */
    printf("\n=== Carta 2 ===\n");
    printf("Estado: "); scanf(" %c", &estado2); limpar_buffer();
    printf("Cidade: "); scanf("%19s", cidade2); limpar_buffer();
    printf("Codigo: "); scanf("%11s", codigo2); limpar_buffer();
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosturisticos2);

    densidade2 = area2 ? (double)populacao2 / area2 : 0.0;
    pibpercapita2 = populacao2 ? (double)pib2 / populacao2 : 0.0;
    superp2 = populacao2 + area2 + pontosturisticos2 + pib2 + pibpercapita2 +
              (densidade2 != 0 ? 1.0 / densidade2 : 0.0);

    /* Escolha de atributos */
escolha_primeiro:
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade\n6. PIB per Capita\n7. SuperPoder\n");
    scanf("%d", &escolha1); limpar_buffer();
    if (escolha1 < 1 || escolha1 > 7) {
        printf("Opcao invalida!\n");
        goto escolha_primeiro;  /* sem while */
    }

escolha_segundo:
    printf("\nEscolha o SEGUNDO atributo (diferente de %s):\n", nome_atributo(escolha1));
    for (int i = 1; i <= 7; i++) {
        if (i == escolha1) continue;
        printf("%d. %s\n", i, nome_atributo(i));
    }
    scanf("%d", &escolha2); limpar_buffer();
    if (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1) {
        printf("Opcao invalida!\n");
        goto escolha_segundo;  /* sem while */
    }

    /* Comparações */
    double v1_a1 = obter_valor_atributo(escolha1, populacao1, area1, pib1, pontosturisticos1, densidade1, pibpercapita1, superp1);
    double v2_a1 = obter_valor_atributo(escolha1, populacao2, area2, pib2, pontosturisticos2, densidade2, pibpercapita2, superp2);

    double v1_a2 = obter_valor_atributo(escolha2, populacao1, area1, pib1, pontosturisticos1, densidade1, pibpercapita1, superp1);
    double v2_a2 = obter_valor_atributo(escolha2, populacao2, area2, pib2, pontosturisticos2, densidade2, pibpercapita2, superp2);

    printf("\n--- Resultado ---\n");
    printf("%s (%s): %.2f | %s (%s): %.2f\n",
           cidade1, nome_atributo(escolha1), v1_a1,
           cidade2, nome_atributo(escolha1), v2_a1);

    printf("%s (%s): %.2f | %s (%s): %.2f\n",
           cidade1, nome_atributo(escolha2), v1_a2,
           cidade2, nome_atributo(escolha2), v2_a2);

    double soma1 = v1_a1 + v1_a2;
    double soma2 = v2_a1 + v2_a2;

    printf("\nSoma %s: %.2f\n", cidade1, soma1);
    printf("Soma %s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) printf("Vencedor final: %s\n", cidade1);
    else if (soma2 > soma1) printf("Vencedor final: %s\n", cidade2);
    else printf("Empate!\n");

    return 0;
}