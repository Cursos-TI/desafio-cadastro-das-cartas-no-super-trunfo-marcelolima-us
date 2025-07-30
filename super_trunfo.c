#include <stdio.h>

int main()
{

       // Declaração das variáveis da Carta 1

       char Estado1;
       char Codigo1[4];
       char NomeCidade1[50];
       unsigned long int Populacao1;
       float Area1;
       float PIB1;
       int PontosTuristicos1;

       // Declaração das variáveis da Carta 2

       char Estado2;
       char Codigo2[4];
       char NomeCidade2[50];
       unsigned long int Populacao2;
       float Area2;
       float PIB2;
       int PontosTuristicos2;

       printf("Jogo Super Trunfo\n"); // Banner de início do jogo

       // Leitura dos dados da Carta 1

       printf("Cadastro da Carta 1\n");

       printf("Digite o Estado (letra de A a H): ");
       scanf("%c", &Estado1);

       printf("Digite o Código da Carta (ex: A01): ");
       scanf("%s", Codigo1);

       printf("Digite o Nome da Cidade: ");
       scanf(" %[^\n]", NomeCidade1);

       printf("Digite a População: ");
       scanf("%lu", &Populacao1);

       printf("Digite a Área (em km²): ");
       scanf("%f", &Area1);

       printf("Digite o PIB (em Bilhões): ");
       scanf("%f", &PIB1);

       printf("Digite o Número de Pontos Turísticos: ");
       scanf("%d", &PontosTuristicos1);

       // Cálculo da densidade populacional e PIB per capita para a Carta 1
       double DensidadePopulacional1 = Populacao1 / Area1; // habitantes por km²
       double PIBPerCapita1 = PIB1 * 1e9 / Populacao1;     // PIB em reais por habitante

       // Leitura dos dados da Carta 2

       printf("\nCadastro da Carta 2\n");

       printf("Digite o Estado (letra de A a H): ");
       scanf(" %c", &Estado2);

       printf("Digite o Código da Carta (ex: A02): ");
       scanf("%s", Codigo2);

       printf("Digite o Nome da Cidade: ");
       scanf(" %[^\n]", NomeCidade2);

       printf("Digite a População: ");
       scanf("%lu", &Populacao2);

       printf("Digite a Área (em km²): ");
       scanf("%f", &Area2);

       printf("Digite o PIB (em Bilhões): ");
       scanf("%f", &PIB2);

       printf("Digite o Número de Pontos Turísticos: ");
       scanf("%d", &PontosTuristicos2);

       // Cálculo da densidade populacional e PIB per capita para a Carta 2
       double DensidadePopulacional2 = Populacao2 / Area2; // habitantes por km²
       double PIBPerCapita2 = PIB2 * 1e9 / Populacao2;     // PIB em reais por habitante

       // Exibição dos dados das cartas 1

       printf("\nDados da Carta 1\n");
       printf("Estado: %c\n", Estado1);
       printf("Código: %s\n", Codigo1);
       printf("Nome da Cidade: %s\n", NomeCidade1);
       printf("População: %lu\n", Populacao1);
       printf("Área: %.2f km²\n", Area1);
       printf("PIB: %.2f milhões\n", PIB1);
       printf("Pontos Turísticos: %d\n", PontosTuristicos1);
       printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional1);
       printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);

       // Exibição dos dados das cartas 2

       printf("\nDados da Carta 2\n");
       printf("Estado: %c\n", Estado2);
       printf("Código: %s\n", Codigo2);
       printf("Nome da Cidade: %s\n", NomeCidade2);
       printf("População: %lu\n", Populacao2);
       printf("Área: %.2f km²\n", Area2);
       printf("PIB: %.2f milhões\n", PIB2);
       printf("Pontos Turísticos: %d\n", PontosTuristicos2);
       printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional2);
       printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);

       // Cálculo do Super Poder para cada carta
       float SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1.0 / DensidadePopulacional1);
       float SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1.0 / DensidadePopulacional2);

       // Comparação das cartas usando apenas o atributo População
       printf("\nComparação de cartas (Atributo: População):\n\n");

       printf("Carta 1 - %s (%c): %lu\n", NomeCidade1, Estado1, Populacao1);
       printf("Carta 2 - %s (%c): %lu\n", NomeCidade2, Estado2, Populacao2);

       // Determina a carta vencedora baseado na População
       if (Populacao1 > Populacao2)
       {
              printf("\nResultado: Carta 1 (%s) venceu!\n", NomeCidade1);
       }
       else if (Populacao2 > Populacao1)
       {
              printf("\nResultado: Carta 2 (%s) venceu!\n", NomeCidade2);
       }
       else
       {
              printf("\nResultado: Empate!\n");
       }
}