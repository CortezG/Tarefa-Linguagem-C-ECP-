#include <stdio.h>

int main
() {

    int n, soma, count;

    soma = 0;

    for(count = 1; count <= 50; count++){
        printf("Escreva um numero: ");
        scanf("%d", &n);

        if (n % 2 != 0 && n < 201 && n > 99){

            soma += n;

        }

      }

    printf("a soma de todos os ímpares entre 100 e 200 e: %d", soma);
    return(0);
}