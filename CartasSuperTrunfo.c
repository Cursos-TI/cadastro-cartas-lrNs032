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

  printf("Digite o código da carta 2: ");
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


  // Área para exibição dos dados da cidade

  printf("Carta 1 \n");
  printf("Código: %s \n", cod_carta);
  printf("Estado: %s \n", estado);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", população);
  printf("Área: %f \n", área);
  printf("PIB: %f \n", pib);
  printf("Pontos turísticos: %d \n", pontosturis);

  printf("Carta 2 \n");
  printf("Código: %s \n", cod_carta);
  printf("Estado: %s \n", estado);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", população);
  printf("Área: %f \n", área);
  printf("PIB: %f \n", pib);
  printf("Pontos turísticos: %d \n", pontosturis);

}