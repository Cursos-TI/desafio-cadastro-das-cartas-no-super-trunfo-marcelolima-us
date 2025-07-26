#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];  // 3 caracteres + terminador nulo
    char nome_cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;  // Densidade populacional calculada
    float pib_per_capita1;         // PIB per capita calculado
    
    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];  // 3 caracteres + terminador nulo
    char nome_cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;  // Densidade populacional calculada
    float pib_per_capita2;         // PIB per capita calculado
    
    // Cadastro da primeira carta
    printf("=== CADASTRO DO SUPER TRUNFO DE PAÍSES ===\n\n");
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê linha inteira incluindo espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da segunda carta
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);  // Lê linha inteira incluindo espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a primeira carta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;  // PIB em bilhões convertido para reais
    
    // Cálculos para a segunda carta
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;  // PIB em bilhões convertido para reais
    
    // Exibição das cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("\n");
    
    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    return 0;
}