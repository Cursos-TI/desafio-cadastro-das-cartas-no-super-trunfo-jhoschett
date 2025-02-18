#include <stdio.h>

int main() {
    //   variáveis para armazenar os dados de cada carta
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4] = "A01", codigo2[4] = "B01";
    char cidade1[50] = "Luxemburgo", cidade2[50] = "Dublin";
    int populacao1 = 125000, populacao2 = 1200000;
    float area1 = 51.46, area2 = 114.99;
    float pib1 = 85.5, pib2 = 558.2;
    int pontosTuristicos1 = 20, pontosTuristicos2 = 40;

    // Exibindo os dados das duas cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
