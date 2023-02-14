#include <stdio.h>

int main() {
    int matriz[5][5];
    int linha, coluna;
    int somaLinha4 = 0, somaColuna2 = 0;

    printf("Digite os valores da matriz 5 x 5: \n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Diagonal principal: \n");
    for (linha = 0; linha < 5; linha++) {
        printf("%d ", matriz[linha][linha]);
    }
    printf("\n");

    printf("Diagonal secundária: \n");
    for (linha = 0; linha < 5; linha++) {
        printf("%d ", matriz[linha][4 - linha]);
    }
    printf("\n");

    for (coluna = 0; coluna < 5; coluna++) {
        somaLinha4 += matriz[3][coluna];
        somaColuna2 += matriz[coluna][1];
    }
    printf("Soma da linha 4: %d\n", somaLinha4);
    printf("Soma da coluna 2: %d\n", somaColuna2);

    printf("Tudo, exceto a diagonal principal: \n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (linha != coluna) {
                printf("%d ", matriz[linha][coluna]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
