#include <stdio.h>

#define TAMANHO 10
#define CONE 1
#define OCTAEDRO 2
#define CRUZ 3

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char tipo) {
    int i, j;
    
    if (tipo == 'C') { // Cruz
        for (i = -2; i <= 2; i++) {
            if (linha + i >= 0 && linha + i < TAMANHO) tabuleiro[linha + i][coluna] = CRUZ;
            if (coluna + i >= 0 && coluna + i < TAMANHO) tabuleiro[linha][coluna + i] = CRUZ;
        }
    } else if (tipo == 'O') { // Octaedro
        for (i = -2; i <= 2; i++) {
            for (j = -2; j <= 2; j++) {
                if (abs(i) + abs(j) <= 2) {
                    if (linha + i >= 0 && linha + i < TAMANHO && coluna + j >= 0 && coluna + j < TAMANHO) {
                        tabuleiro[linha + i][coluna + j] = OCTAEDRO;
                    }
                }
            }
        }
    } else if (tipo == 'N') { // Cone
        for (i = 0; i <= 2; i++) {
            for (j = -i; j <= i; j++) {
                if (linha + i >= 0 && linha + i < TAMANHO && coluna + j >= 0 && coluna + j < TAMANHO) {
                    tabuleiro[linha + i][coluna + j] = CONE;
                }
            }
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < TAMANHO; i++) {
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
    
    aplicarHabilidade(tabuleiro, 0, 1, 'C'); // Cruz acima do cone
    aplicarHabilidade(tabuleiro, 2, 1, 'N'); // Cone abaixo da cruz
    aplicarHabilidade(tabuleiro, 2, 3, 'O'); // Octaedro ao lado do cone
    
    exibirTabuleiro(tabuleiro);
    
    return 0;
}
