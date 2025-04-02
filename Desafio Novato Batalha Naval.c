#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Posição inicial do navio horizontal (E/3, F/3, G/3)
    int linhaH = 2; // Linha 3 no tabuleiro (índice 2)
    int colunaH = 4; // Coluna E (índice 4)
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Posição inicial do navio vertical (6/3, 7/3, 8/3)
    int linhaV = 5; // Linha 6 no tabuleiro (índice 5)
    int colunaV = 2; // Coluna C (índice 2)
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    // Imprimindo cabeçalho das colunas
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < TAMANHO; i++) {
        // Imprimindo número da linha
        printf("%d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);
    
    return 0;
