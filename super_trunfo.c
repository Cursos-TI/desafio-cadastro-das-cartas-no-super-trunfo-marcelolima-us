#include <stdio.h>
#include <string.h>

int main()
{
  // Variáveis para a primeira carta
  char estado1;
  char codigo1[4]; // 3 caracteres + terminador nulo
  char nome_cidade1[100];
  unsigned long int populacao1; // Changed to unsigned long int for larger populations
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacional1; // Densidade populacional calculada
  float pib_per_capita1;         // PIB per capita calculado

  // Variáveis para a segunda carta
  char estado2;
  char codigo2[4]; // 3 caracteres + terminador nulo
  char nome_cidade2[100];
  unsigned long int populacao2; // Changed to unsigned long int for larger populations
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2; // Densidade populacional calculada
  float pib_per_capita2;         // PIB per capita calculado

  // Cadastro da primeira carta
  printf("=== CADASTRO DO SUPER TRUNFO DE PAÍSES ===\n\n");
  printf("--- CADASTRO DA CARTA 1 ---\n");

  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (ex: A01): ");
  scanf(" %3s", codigo1); // Limit to 3 characters
  while (getchar() != '\n')
    ; // Clear input buffer

  printf("Digite o nome da cidade: ");
  fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
  nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // Remove newline

  printf("Digite a população: ");
  scanf("%lu", &populacao1);

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
  scanf(" %3s", codigo2); // Limit to 3 characters
  while (getchar() != '\n')
    ; // Clear input buffer

  printf("Digite o nome da cidade: ");
  fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
  nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // Remove newline

  printf("Digite a população: ");
  scanf("%lu", &populacao2);

  printf("Digite a área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Cálculos para a primeira carta
  densidade_populacional1 = area1 != 0.0f ? (float)populacao1 / area1 : 0.0f;
  pib_per_capita1 = populacao1 != 0 ? (pib1 * 1000000000.0f) / (float)populacao1 : 0.0f;

  // Cálculos para a segunda carta
  densidade_populacional2 = area2 != 0.0f ? (float)populacao2 / area2 : 0.0f;
  pib_per_capita2 = populacao2 != 0 ? (pib2 * 1000000000.0f) / (float)populacao2 : 0.0f;

  // Exibição das cartas cadastradas
  printf("\n=== CARTAS CADASTRADAS ===\n\n");

  // Exibição da primeira carta
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %lu\n", populacao1);
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
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;
}