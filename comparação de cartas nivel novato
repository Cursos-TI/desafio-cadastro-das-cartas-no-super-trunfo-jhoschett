#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os atributos de uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcular_atributos(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = (carta->pib * 1e9) / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1 / carta->densidade_populacional);
}

// Função para comparar e exibir resultados
void comparar_cartas(Carta c1, Carta c2, char atributo[]) {
    float valor1, valor2;
    int vencedor = 0;

    if (strcmp(atributo, "populacao") == 0) {
        valor1 = c1.populacao;
        valor2 = c2.populacao;
    } else if (strcmp(atributo, "area") == 0) {
        valor1 = c1.area;
        valor2 = c2.area;
    } else if (strcmp(atributo, "pib") == 0) {
        valor1 = c1.pib;
        valor2 = c2.pib;
    } else if (strcmp(atributo, "densidade") == 0) {
        valor1 = c1.densidade_populacional;
        valor2 = c2.densidade_populacional;
        vencedor = (valor1 < valor2) ? 1 : 2;
    } else if (strcmp(atributo, "pib_per_capita") == 0) {
        valor1 = c1.pib_per_capita;
        valor2 = c2.pib_per_capita;
    } else if (strcmp(atributo, "super_poder") == 0) {
        valor1 = c1.super_poder;
        valor2 = c2.super_poder;
    } else {
        printf("Atributo inválido!\n");
        return;
    }

    if (vencedor == 0) {
        if (valor1 > valor2) {
            vencedor = 1;
        } else if (valor1 < valor2) {
            vencedor = 2;
        }
    }

    printf("Comparacao de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%c): %.2f\n", c1.nome, c1.estado, valor1);
    printf("Carta 2 - %s (%c): %.2f\n\n", c2.nome, c2.estado, valor2);

    if (vencedor == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
    } else if (vencedor == 2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    Carta carta1 = {'A', "A01", "Luxemburgo", 125000, 51.46, 85.5, 20};
    Carta carta2 = {'B', "B01", "Dublin", 1200000, 114.99, 558.2, 40};

    calcular_atributos(&carta1);
    calcular_atributos(&carta2);

    char atributo[] = "populacao"; // Modifique para testar diferentes atributos
    comparar_cartas(carta1, carta2, atributo);

    return 0;
}
