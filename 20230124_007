#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_FACES 6

int main() {
    int randomNumber, n, i, faces[NUM_FACES] = {0};

    printf("Quantos lançamentos deseja realizar? ");
    scanf("%d", &n);

    srand(time(NULL));

    for (i = 0; i < n; i++) {
        randomNumber = rand() % NUM_FACES + 1;
        faces[randomNumber - 1]++;
    }

    printf("\nResultados:\n");
    for (i = 0; i < NUM_FACES; i++) {
        printf("Face %d: %d ocorrência(s)\n", i + 1, faces[i]);
    }

    return 0;
}
