#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio xadrez!");
  printf("Novo commit \n");
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1;
    char codigo1[4]; // 3 caracteres + '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

     char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

  // Área para entrada de dados

   printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até encontrar uma quebra de linha
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    
    // Área para exibição dos dados da cidade
    
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

     printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    return 0;
} 
