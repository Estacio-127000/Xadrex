#include <stdio.h>

int main(void) {
    /* Quantidade de casas que cada peça vai andar (definido direto no código) */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; /* contador */

    /* =========================================================
       TORRE -> usando FOR (5 casas para a direita)
       ========================================================= */
    printf("Movimento da Torre (5 casas para a direita):\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    /* =========================================================
       BISPO -> usando WHILE (5 casas na diagonal: Cima + Direita)
       ========================================================= */
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e a direita):\n");

    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    /* =========================================================
       RAINHA -> usando DO-WHILE (8 casas para a esquerda)
       ========================================================= */
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}