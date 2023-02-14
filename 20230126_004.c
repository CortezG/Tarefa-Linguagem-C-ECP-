#include <stdio.h>

int main() {
    int matriz[3][3];
    int x;
    int linha, coluna;
    int encontrado = 0;

    printf("Digite os valores da matriz 3 x 3: \n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Digite o valor de X: \n");
    scanf("%d", &x);

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] == x) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }

    if (encontrado) {
        printf("Valor encontrado na posição [%d][%d]\n", linha, coluna);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}
