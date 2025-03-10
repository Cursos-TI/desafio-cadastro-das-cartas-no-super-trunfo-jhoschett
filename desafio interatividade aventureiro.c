#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações de cada cidade
typedef struct {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Cidade;

// Função para exibir os detalhes das cartas
displayCarta(Cidade c) {
    printf("\nCidade: %s (%c)\n", c.nome, c.estado);
    printf("Código: %s\n", c.codigo);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km^2\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km^2\n", c.densidade_demografica);
}

// Função principal
int main() {
    // Definição das cartas (exemplo)
    Cidade cidade1 = {'A', "A01", "Luxemburgo", 125000, 51.46, 85.5, 20, 125000 / 51.46};
    Cidade cidade2 = {'B', "B01", "Dublin", 1200000, 114.99, 558.2, 40, 1200000 / 114.99};
    
    int opcao;
    
    printf("=== Super Trunfo: Batalha de Cidades ===\n");
    printf("Escolha um atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &opcao);
    
    printf("\nComparando: %s vs %s\n", cidade1.nome, cidade2.nome);
    
    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1.nome, cidade1.populacao);
            printf("%s: %d habitantes\n", cidade2.nome, cidade2.populacao);
            if (cidade1.populacao > cidade2.populacao)
                printf("Vencedor: %s!\n", cidade1.nome);
            else if (cidade1.populacao < cidade2.populacao)
                printf("Vencedor: %s!\n", cidade2.nome);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km^2\n", cidade1.nome, cidade1.area);
            printf("%s: %.2f km^2\n", cidade2.nome, cidade2.area);
            if (cidade1.area > cidade2.area)
                printf("Vencedor: %s!\n", cidade1.nome);
            else if (cidade1.area < cidade2.area)
                printf("Vencedor: %s!\n", cidade2.nome);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1.nome, cidade1.pib);
            printf("%s: %.2f bilhões\n", cidade2.nome, cidade2.pib);
            if (cidade1.pib > cidade2.pib)
                printf("Vencedor: %s!\n", cidade1.nome);
            else if (cidade1.pib < cidade2.pib)
                printf("Vencedor: %s!\n", cidade2.nome);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1.nome, cidade1.pontos_turisticos);
            printf("%s: %d pontos\n", cidade2.nome, cidade2.pontos_turisticos);
            if (cidade1.pontos_turisticos > cidade2.pontos_turisticos)
                printf("Vencedor: %s!\n", cidade1.nome);
            else if (cidade1.pontos_turisticos < cidade2.pontos_turisticos)
                printf("Vencedor: %s!\n", cidade2.nome);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km^2\n", cidade1.nome, cidade1.densidade_demografica);
            printf("%s: %.2f hab/km^2\n", cidade2.nome, cidade2.densidade_demografica);
            if (cidade1.densidade_demografica < cidade2.densidade_demografica)
                printf("Vencedor: %s!\n", cidade1.nome);
            else if (cidade1.densidade_demografica > cidade2.densidade_demografica)
                printf("Vencedor: %s!\n", cidade2.nome);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}
