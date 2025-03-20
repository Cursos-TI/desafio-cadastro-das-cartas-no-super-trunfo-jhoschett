#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("direita\n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda
    printf("Movimento do Cavalo:\n");
    
    // Primeiro loop for para descer duas casas
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
    printf("\n"); // Linha em branco para separar do restante
    
    // Segundo loop while para mover uma casa para a esquerda
    int m = 0;
    while (m < 1) {
        printf("Esquerda\n");
        m++;
    }
    
    return 0;
}
