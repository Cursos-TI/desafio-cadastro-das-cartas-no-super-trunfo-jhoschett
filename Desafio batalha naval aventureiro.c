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

int verificaSobreposicao(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, int deltaLinha, int deltaColuna) {
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[linha][coluna] != 0) {
            return 0; // Sobreposição detectada
        }
        linha += deltaLinha;
        coluna += deltaColuna;
    }
    return 1; // Espaço livre
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, int deltaLinha, int deltaColuna) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha][coluna] = 3;
        linha += deltaLinha;
        coluna += deltaColuna;
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Navio horizontal (E/3, F/3, G/3)
    if (verificaSobreposicao(tabuleiro, 2, 4, NAVIO, 0, 1)) {
        posicionarNavio(tabuleiro, 2, 4, NAVIO, 0, 1);
    }
    
    // Navio vertical (6/3, 7/3, 8/3)
    if (verificaSobreposicao(tabuleiro, 5, 2, NAVIO, 1, 0)) {
        posicionarNavio(tabuleiro, 5, 2, NAVIO, 1, 0);
    }
    
    // Navio diagonal crescente (D/5, E/6, F/7)
    if (verificaSobreposicao(tabuleiro, 4, 3, NAVIO, 1, 1)) {
        posicionarNavio(tabuleiro, 4, 3, NAVIO, 1, 1);
    }
    
    // Navio diagonal decrescente (I/2, H/3, G/4)
    if (verificaSobreposicao(tabuleiro, 1, 8, NAVIO, 1, -1)) {
        posicionarNavio(tabuleiro, 1, 8, NAVIO, 1, -1);
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    // Imprimindo cabeçalho das colunas
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < TAMANHO; i++) {
        // Imprimindo número da linha
        printf("%2d ", i + 1);
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
}
