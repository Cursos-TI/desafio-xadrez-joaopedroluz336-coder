#include <stdio.h>

int main() {

    printf("Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\nBispo:\n");
    int passo = 1;
    while (passo <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        passo++;
    }

    printf("\nRainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);

    return 0;
}
