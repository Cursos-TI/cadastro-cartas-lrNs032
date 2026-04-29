#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cod_carta[10];
  char estado[5];
  char cidade[20];
  int população;
  float área;
  float pib;
  int pontosturis;
  float densidade_populacional;
  float pib_per_capita;

  char cod_carta2[10];
  char estado2[5];
  char cidade2[20];
  int população2;
  float área2;
  float pib2;
  int pontosturis2;
  float densidade_populacional2;
  float pib_per_capita2;

  // Área para entrada de dados

  printf("Digite o código da carta 1: ");
  scanf("%9s", cod_carta);
  printf("Digite o estado: ");
  scanf("%4s", estado);
  printf("Digite a cidade: ");
  scanf("%19s", cidade);
  printf("Digite a população: ");
  scanf("%d", &população);
  printf("Digite a área: ");
  scanf("%f", &área);
  printf("Digite o PIB: ");
  scanf("%f", &pib);
  printf("Digite os pontos turísticos: ");
  scanf("%d", &pontosturis);
  densidade_populacional = população / área;
  pib_per_capita = pib / população;
  


  printf("Digite o código da carta 2: ");
  scanf("%9s", cod_carta2);
  printf("Digite o estado: ");
  scanf("%4s", estado2);
  printf("Digite a cidade: ");
  scanf("%19s", cidade2);
  printf("Digite a população: ");
  scanf("%d", &população2);
  printf("Digite a área: ");
  scanf("%f", &área2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite os pontos turísticos: ");
  scanf("%d", &pontosturis2);
  densidade_populacional2 = população2 / área2;
  pib_per_capita2 = pib2 / população2;

  // Área para exibição dos dados da cidade

  printf("Carta 1 \n");
  printf("Código: %s \n", cod_carta);
  printf("Estado: %s \n", estado);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", população);
  printf("Área: %f \n", área);
  printf("PIB: %f \n", pib);
  printf("Pontos turísticos: %d \n", pontosturis);
  printf("Densidade populacional: %f \n", densidade_populacional);
  printf("PIB per capita: %f \n", pib_per_capita);


  printf("Carta 2 \n");
  printf("Código: %s \n", cod_carta2);
  printf("Estado: %s \n", estado2);
  printf("Cidade: %s \n", cidade2);
  printf("População: %d \n", população2);
  printf("Área: %f \n", área2);
  printf("PIB: %f \n", pib2);
  printf("Pontos turísticos: %d \n", pontosturis2);
  printf("Densidade populacional: %f \n", densidade_populacional2);
  printf("PIB per capita: %f \n", pib_per_capita2);

  return 0;

}