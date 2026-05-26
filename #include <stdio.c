#include <stdio.h>

int main() {

    // --- TORRE: 5 casas para a Direita (usando FOR) ---
    printf("Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // --- BISPO: 5 casas na Diagonal (usando WHILE) ---
    printf("\nBispo:\n");
    int passo = 1;
    while (passo <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        passo++;
    }

    // --- RAINHA: 8 casas para a Esquerda (usando DO-WHILE) ---
    printf("\nRainha:\n");
    int i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}