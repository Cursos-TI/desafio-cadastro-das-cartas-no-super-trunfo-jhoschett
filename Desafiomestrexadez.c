#include <stdio.h>

// Função recursiva para o movimento da Torre
// Move a torre uma casa para a direita até atingir o número especificado
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base: para quando não há mais casas para mover
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva reduzindo o número de casas restantes
}

// Função recursiva para o movimento do Bispo
// Move o bispo diagonalmente (Cima, Direita) até atingir o número especificado
void moverBispo(int casas) {
    if (casas == 0) return; // Caso base
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva para continuar o movimento
}

// Função recursiva para o movimento da Rainha
// Move a rainha na direção especificada até atingir o número especificado
void moverRainha(int casas, char direcao) {
    if (casas == 0) return; // Caso base
    if (direcao == 'e') printf("Esquerda\n");
    else if (direcao == 'd') printf("Direita\n");
    else printf("Cima, Direita\n");
    moverRainha(casas - 1, direcao); // Chamada recursiva reduzindo o número de casas restantes
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n"); // Separação entre movimentos

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8, 'e');
    printf("\n");

    // Movimento do Cavalo: duas casas para cima e uma para a direita
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) printf("Cima\n");
    printf("Direita\n");
    
    return 0;
}
