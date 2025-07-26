#include <stdio.h>

int main()
{
  // Declaração das variáveis da Carta 1
  char estado1;
  char codigo1[4]; // ex: A01 -> 3 caracteres + '\0'
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;

  // Declaração das variáveis da Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  // Leitura dos dados da Carta 1
  printf("Cadastro da Carta 1\n");

  printf("Digite o Estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o Código da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cálculo da densidade populacional e PIB per capita para a Carta 1
  densidadePopulacional1 = populacao1 / area1; // habitantes por km²
  pibPerCapita1 = pib1 * 1e9 / populacao1;     // PIB em reais por habitante

  // Leitura dos dados da Carta 2
  printf("\nCadastro da Carta 2\n");

  printf("Digite o Estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta (ex: A01): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da densidade populacional e PIB per capita para a Carta 2
  densidadePopulacional2 = populacao2 / area2; // habitantes por km²
  pibPerCapita2 = pib2 * 1e9 / populacao2;     // PIB em reais por habitante

  // Impressão das informações da Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  // Impressão das informações da Carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  return 0;
}
// super_trunfo.c - Programa para cadastro de cartas do jogo Super Trunfo