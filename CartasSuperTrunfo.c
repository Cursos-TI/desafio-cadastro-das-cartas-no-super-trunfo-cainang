#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível: Aventureiro
// Objetivo: Cadastrar duas cartas e calcular Densidade Populacional e PIB per Capita.

int main() {
    // Variáveis para a Carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis para a Carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);
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
    scanf(" %d", &populacao2);
    printf("Digite a area (em km2): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhoes de R$): ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    printf("\n");

    // --- Cálculos dos Atributos Adicionais ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para valor real

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para valor real

    // --- Exibição dos Dados das Cartas Cadastradas ---
    printf("--- Dados da Primeira Carta ---\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("\n");

    printf("--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}