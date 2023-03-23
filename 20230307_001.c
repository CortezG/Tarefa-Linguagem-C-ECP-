#include <stdio.h>
int i;
void imprime(float *inicio, float *final, int tamanho) {
    printf("(");
    for (i = 0; i < tamanho - 1; i++) {
        printf("%.2f, ", *(inicio + i));
    }
    printf("%.2f)\n", *(inicio+i));
}

int main() {
    int t1, t2, t3;
    int i1, i2, i3, f1, f2, f3;

    printf("Qual o tamanho do primeiro vetor? ");
    scanf("%d", &t1);
    float v1[t1];
    for (i = 0; i < t1; i++) {
        printf("Qual o %d valor do primeiro vetor? ", i + 1);
        scanf("%f", &v1[i]);
    }
    printf("qual a posicao do vetor deve ser o inicio? ");
    scanf("%d", &i1);
    printf("e final? ");
    scanf("%d", &f1);

    imprime(&v1[i1], &v1[f1], f1 - i1 + 1);

    printf("Qual o tamanho do segundo vetor? ");
    scanf("%d", &t2);
    float v2[t2];
    for (i = 0; i < t2; i++) {
        printf("Qual o %d valor do segundo vetor? ", i + 1);
        scanf("%f", &v2[i]);
    }
    printf("qual a posicao do vetor deve ser o inicio? ");
    scanf("%d", &i2);
    printf("e final? ");
    scanf("%d", &f2);
    imprime(&v2[i2], &v2[f2], f2 - i2 + 1);

    printf("Qual o tamanho do terceiro vetor? ");
    scanf("%d", &t3);
    float v3[t3];
    for (i = 0; i < t3; i++) {
        printf("Qual o %d valor do terceiro vetor? ", i + 1);
        scanf("%f", &v3[i]);
    }
    printf("qual a posicao do vetor deve ser o inicio? ");
    scanf("%d", &i3);
    printf("e final? ");
    scanf("%d", &f3);
    imprime(&v3[i3], &v3[f3], f3 - i3 + 1);

    return 0;
}
