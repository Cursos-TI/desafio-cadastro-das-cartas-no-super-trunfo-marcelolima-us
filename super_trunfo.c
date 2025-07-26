#include <stdio.h>

int main()
{
  // Variáveis para a Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade1;
  float pib_per_capita1;

  // Variáveis para a Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade2;
  float pib_per_capita2;

  printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");

  // Leitura dos dados da Carta 1
  printf("--- CARTA 1 ---\n");
  printf("Digite o estado (letra): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta: ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área (km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Leitura dos dados da Carta 2
  printf("\n--- CARTA 2 ---\n");
  printf("Digite o estado (letra): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área (km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Cálculos para a Carta 1
  densidade1 = populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para reais

  // Cálculos para a Carta 2
  densidade2 = populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para reais

  // Exibição dos resultados
  printf("\n=== RESULTADOS ===\n\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;
}