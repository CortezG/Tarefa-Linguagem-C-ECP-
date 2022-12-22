#include <stdio.h>

int main() {

    int n, soma, count;

    soma = 0;

    for(count = 1; count <= 50; count++){
        printf("Escreva um numero: ");
        scanf("%d", &n);

        if (n % 2 != 0){
            soma += n;
        }

      }

    printf("a soma de todos os ímpares e: %d", soma);
    return(0);
}