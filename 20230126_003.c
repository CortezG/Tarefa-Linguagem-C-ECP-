#include <stdio.h>

int main() {
    int matriz[3][3];
    int k;
    int linha, coluna;

    printf("Digite os valores da matriz 3 x 3: \n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Digite o valor do escalar k: \n");
    scanf("%d", &k);

    printf("Matriz original: \n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz multiplicada por k: \n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matriz[linha][coluna] = matriz[linha][coluna] * k;
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
