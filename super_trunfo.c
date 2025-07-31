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

       // Menu interativo para escolha dos atributos
       int opcao1, opcao2;
       int continuar = 1;

       while (continuar)
       {
              printf("\n=== Menu de Comparação - Primeiro Atributo ===\n");
              printf("Escolha o primeiro atributo para comparação:\n");
              printf("1 - População\n");
              printf("2 - Área\n");
              printf("3 - PIB\n");
              printf("4 - Pontos Turísticos\n");
              printf("5 - Densidade Populacional\n");
              printf("6 - PIB per Capita\n");
              printf("0 - Sair\n");
              printf("Digite sua escolha: ");
              scanf("%d", &opcao1);

              if (opcao1 == 0)
              {
                     continuar = 0;
                     printf("\nObrigado por jogar!\n");
                     continue;
              }

              if (opcao1 < 1 || opcao1 > 6)
              {
                     printf("\nOpção inválida! Por favor, escolha um número entre 0 e 6.\n");
                     continue;
              }

              printf("\n=== Menu de Comparação - Segundo Atributo ===\n");
              printf("Escolha o segundo atributo para comparação:\n");
              if (opcao1 != 1)
                     printf("1 - População\n");
              if (opcao1 != 2)
                     printf("2 - Área\n");
              if (opcao1 != 3)
                     printf("3 - PIB\n");
              if (opcao1 != 4)
                     printf("4 - Pontos Turísticos\n");
              if (opcao1 != 5)
                     printf("5 - Densidade Populacional\n");
              if (opcao1 != 6)
                     printf("6 - PIB per Capita\n");
              printf("Digite sua escolha: ");
              scanf("%d", &opcao2);

              if (opcao2 == opcao1)
              {
                     printf("\nVocê não pode escolher o mesmo atributo duas vezes!\n");
                     continue;
              }

              if (opcao2 < 1 || opcao2 > 6)
              {
                     printf("\nOpção inválida! Por favor, escolha um número entre 1 e 6.\n");
                     continue;
              }

              printf("\n=== Comparação de Cartas ===\n");

              // Variáveis para armazenar os valores dos atributos e pontuações
              double valor1_carta1, valor1_carta2;
              double valor2_carta1, valor2_carta2;
              int pontos_carta1 = 0, pontos_carta2 = 0;
              char *nome_atributo1, *nome_atributo2;

              // Avaliação do primeiro atributo
              switch (opcao1)
              {
              case 1: // População
                     nome_atributo1 = "População";
                     valor1_carta1 = Populacao1;
                     valor1_carta2 = Populacao2;
                     break;

              case 2: // Área
                     nome_atributo1 = "Área";
                     valor1_carta1 = Area1;
                     valor1_carta2 = Area2;
                     break;

              case 3: // PIB
                     nome_atributo1 = "PIB";
                     valor1_carta1 = PIB1;
                     valor1_carta2 = PIB2;
                     break;

              case 4: // Pontos Turísticos
                     nome_atributo1 = "Pontos Turísticos";
                     valor1_carta1 = PontosTuristicos1;
                     valor1_carta2 = PontosTuristicos2;
                     break;

              case 5: // Densidade Populacional
                     nome_atributo1 = "Densidade Populacional";
                     valor1_carta1 = DensidadePopulacional1;
                     valor1_carta2 = DensidadePopulacional2;
                     break;

              case 6: // PIB per Capita
                     nome_atributo1 = "PIB per Capita";
                     valor1_carta1 = PIBPerCapita1;
                     valor1_carta2 = PIBPerCapita2;
                     break;

              default:
                     printf("\nOpção inválida! Por favor, escolha um número entre 1 e 6.\n");
                     continue;
              }

              // Avaliação do segundo atributo
              switch (opcao2)
              {
              case 1: // População
                     nome_atributo2 = "População";
                     valor2_carta1 = Populacao1;
                     valor2_carta2 = Populacao2;
                     break;

              case 2: // Área
                     nome_atributo2 = "Área";
                     valor2_carta1 = Area1;
                     valor2_carta2 = Area2;
                     break;

              case 3: // PIB
                     nome_atributo2 = "PIB";
                     valor2_carta1 = PIB1;
                     valor2_carta2 = PIB2;
                     break;

              case 4: // Pontos Turísticos
                     nome_atributo2 = "Pontos Turísticos";
                     valor2_carta1 = PontosTuristicos1;
                     valor2_carta2 = PontosTuristicos2;
                     break;

              case 5: // Densidade Populacional
                     nome_atributo2 = "Densidade Populacional";
                     valor2_carta1 = DensidadePopulacional1;
                     valor2_carta2 = DensidadePopulacional2;
                     break;

              case 6: // PIB per Capita
                     nome_atributo2 = "PIB per Capita";
                     valor2_carta1 = PIBPerCapita1;
                     valor2_carta2 = PIBPerCapita2;
                     break;

              default:
                     printf("\nOpção inválida! Por favor, escolha um número entre 1 e 6.\n");
                     continue;
              }

              // Comparação dos atributos e cálculo de pontos
              printf("\n=== Resultado da Comparação ===\n");
              printf("\nPrimeiro Atributo (%s):\n", nome_atributo1);
              printf("Carta 1 - %s (%c): %.2f\n", NomeCidade1, Estado1, valor1_carta1);
              printf("Carta 2 - %s (%c): %.2f\n", NomeCidade2, Estado2, valor1_carta2);

              // Pontuação do primeiro atributo
              if (opcao1 == 5) // Densidade Populacional (menor vence)
              {
                     if (valor1_carta1 < valor1_carta2)
                            pontos_carta1++;
                     else if (valor1_carta2 < valor1_carta1)
                            pontos_carta2++;
              }
              else // Demais atributos (maior vence)
              {
                     if (valor1_carta1 > valor1_carta2)
                            pontos_carta1++;
                     else if (valor1_carta2 > valor1_carta1)
                            pontos_carta2++;
              }

              printf("\nSegundo Atributo (%s):\n", nome_atributo2);
              printf("Carta 1 - %s (%c): %.2f\n", NomeCidade1, Estado1, valor2_carta1);
              printf("Carta 2 - %s (%c): %.2f\n", NomeCidade2, Estado2, valor2_carta2);

              // Pontuação do segundo atributo
              if (opcao2 == 5) // Densidade Populacional (menor vence)
              {
                     if (valor2_carta1 < valor2_carta2)
                            pontos_carta1++;
                     else if (valor2_carta2 < valor2_carta1)
                            pontos_carta2++;
              }
              else // Demais atributos (maior vence)
              {
                     if (valor2_carta1 > valor2_carta2)
                            pontos_carta1++;
                     else if (valor2_carta2 > valor2_carta1)
                            pontos_carta2++;
              }

              // Resultado final
              printf("\n=== Placar Final ===\n");
              printf("Carta 1 - %s: %d pontos\n", NomeCidade1, pontos_carta1);
              printf("Carta 2 - %s: %d pontos\n", NomeCidade2, pontos_carta2);

              if (pontos_carta1 > pontos_carta2)
              {
                     printf("\nResultado: Carta 1 (%s) venceu!\n", NomeCidade1);
              }
              else if (pontos_carta2 > pontos_carta1)
              {
                     printf("\nResultado: Carta 2 (%s) venceu!\n", NomeCidade2);
              }
              else
              {
                     printf("\nResultado: Empate!\n");
              }
       }
       return 0;
}