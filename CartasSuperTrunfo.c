#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível: Mestre
// Objetivo: Comparar duas cartas e calcular o "Super Poder".

int main() {
    // Variáveis para a Carta 1
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para a Carta 2
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);
    printf("Digite a area (em km2): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhoes de R$): ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    printf("\n");

    // --- Cadastro da Segunda Carta ---
    printf("--- Cadastro da Segunda Carta ---\n");
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);
    printf("Digite a area (em km2): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhoes de R$): ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    printf("\n");

    // --- Cálculos dos Atributos Adicionais ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- Cálculo do Super Poder ---
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1 / densidadePopulacional1) + pibPerCapita1;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1 / densidadePopulacional2) + pibPerCapita2;

    // --- Exibição dos Dados das Cartas Cadastradas ---
    printf("--- Dados da Primeira Carta ---\n");
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    printf("--- Dados da Segunda Carta ---\n");
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // --- Resultados da Comparacao (1 para Carta 1, 0 para Carta 2) ---
    printf("--- Resultados da Comparacao ---\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}