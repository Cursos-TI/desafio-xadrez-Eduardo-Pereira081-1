#include <stdio.h>

// Constantes de movimentação
#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    // BISPO – Diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // TORRE – Direita
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < TORRE_PASSOS) {
        printf("Direita\n");
        j++;
    }

    // RAINHA – Esquerda
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_PASSOS);

    return 0;
}