#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados de cada carta
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4] = "A01", codigo2[4] = "B01";
    char cidade1[50] = "Luxemburgo", cidade2[50] = "Dublin";
    int populacao1 = 125000, populacao2 = 1200000;
    float area1 = 51.46, area2 = 114.99;
    float pib1 = 85.5, pib2 = 558.2;
    int pontosTuristicos1 = 20, pontosTuristicos2 = 40;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;

    // Exibição do menu de atributos
    printf("Escolha dois atributos para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n");

    // Escolha do primeiro atributo
    printf("Digite o numero do primeiro atributo: ");
    scanf("%d", &opcao1);

    // Garantir que o segundo atributo seja diferente do primeiro
    do {
        printf("Digite o numero do segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
    } while (opcao2 == opcao1);

    // Mapeamento das escolhas para os valores correspondentes
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // Soma dos atributos escolhidos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos resultados
    printf("\nComparacao:\n");
    printf("%s - %s: %.2f | %s: %.2f | Soma: %.2f\n", cidade1, (opcao1 == 1 ? "Populacao" : (opcao1 == 2 ? "Area" : (opcao1 == 3 ? "PIB" : "Pontos Turisticos"))), valor1_carta1, (opcao2 == 1 ? "Populacao" : (opcao2 == 2 ? "Area" : (opcao2 == 3 ? "PIB" : "Pontos Turisticos"))), valor2_carta1, soma1);
    printf("%s - %s: %.2f | %s: %.2f | Soma: %.2f\n", cidade2, (opcao1 == 1 ? "Populacao" : (opcao1 == 2 ? "Area" : (opcao1 == 3 ? "PIB" : "Pontos Turisticos"))), valor1_carta2, (opcao2 == 1 ? "Populacao" : (opcao2 == 2 ? "Area" : (opcao2 == 3 ? "PIB" : "Pontos Turisticos"))), valor2_carta2, soma2);

    // Determinação do vencedor
    if (soma1 > soma2) {
        printf("\nVencedor: %s!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s!\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
