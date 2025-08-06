#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível: Novato
// Objetivo: Cadastrar duas cartas com os atributos: População, Área, PIB e Número de pontos turísticos.

int main() {
    // Variáveis para a Carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    // --- Exibição dos Dados das Cartas Cadastradas ---
    printf("--- Dados da Primeira Carta ---\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n");

    printf("--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}