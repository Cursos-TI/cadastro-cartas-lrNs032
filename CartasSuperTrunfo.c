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
  float super_poder;
  float calculo_densidade;

  char cod_carta2[10];
  char estado2[5];
  char cidade2[20];
  int população2;
  float área2;
  float pib2;
  int pontosturis2;
  float densidade_populacional2;
  float pib_per_capita2;
  float super_poder2;
  float calculo_densidade2;

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
  calculo_densidade = 1.0 / densidade_populacional;
  pib_per_capita = pib / população;
  super_poder = (população + área + pib + pontosturis + pib_per_capita + calculo_densidade);
  


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
  calculo_densidade2 = 1.0 / densidade_populacional2;
  pib_per_capita2 = pib2 / população2;
  super_poder2 = (população2 + área2 + pib2 + pontosturis2 + pib_per_capita2 + calculo_densidade2);

  População: população > população2 ? printf("População: Carta 1 venceu \n") : printf("População: Carta 2 venceu \n");
  Área: área > área2 ? printf("Área: Carta 1 venceu \n") : printf("Área: Carta 2 venceu \n");
  PIB: pib > pib2 ? printf("PIB: Carta 1 venceu \n") : printf("PIB: Carta 2 venceu \n");
  Pontos_turísticos: pontosturis > pontosturis2 ? printf("Pontos_turísticos: Carta 1 venceu \n") : printf("Pontos_turísticos: Carta 2 venceu \n");
  Densidade_populacional: densidade_populacional > densidade_populacional2 ? printf("Densidade_populacional: Carta 1 venceu \n") : printf("Densidade_populacional: Carta 2 venceu \n");
  PIB_per_capita: pib_per_capita > pib_per_capita2 ? printf("PIB_per_capita: Carta 1 venceu \n") : printf("PIB_per_capita: Carta 2 venceu \n");
  Super_poder: super_poder > super_poder2 ? printf("Super_poder: Carta 1 venceu \n") : printf("Super_poder: Carta 2 venceu \n");
  Densidade_calculo: calculo_densidade > calculo_densidade2 ? printf("Densidade_calculo: Carta 2 venceu \n") : printf("Densidade_calculo: Carta 1 venceu \n");

  // Área para exibição dos dados da cidade

  printf("Carta 1 \n");
  printf("Código: %s \n", cod_carta);
  printf("Estado: %s \n", estado);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", população);
  printf("Área: %.2f \n", área);
  printf("PIB: %.2f \n", pib);
  printf("Pontos turísticos: %d \n", pontosturis);
  printf("Densidade populacional: %.5f \n", densidade_populacional);
  printf("PIB per capita: %.2f \n", pib_per_capita);
  printf("Super poder: %.2f \n", super_poder);
  printf("Cálculo de densidade: %.2f \n", calculo_densidade);


  printf("Carta 2 \n");
  printf("Código: %s \n", cod_carta2);
  printf("Estado: %s \n", estado2);
  printf("Cidade: %s \n", cidade2);
  printf("População: %d \n", população2);
  printf("Área: %.2f \n", área2);
  printf("PIB: %.2f \n", pib2);
  printf("Pontos turísticos: %d \n", pontosturis2);
  printf("Densidade populacional: %.5f \n", densidade_populacional2);
  printf("PIB per capita: %.2f \n", pib_per_capita2);
  printf("Super poder: %.2f \n", super_poder2);
  printf("Cálculo de densidade: %.2f \n", calculo_densidade2);

  return 0;

}