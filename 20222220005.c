#include <stdio.h>

int main() {

    int n;
    int n_maior;
    int n_menor;
    int count;
    for (count = 0; count< 3; count++){
        printf("Digite um valor: ");
        scanf("%d", &n);
        
        if (n < 0){
            printf("nao aceitamos numeros negativos, comece novamente");
            break;
        }

        if(n > n_maior){
            n_maior = n;
        }
        if(n < n_menor){
            n_menor = n;
        }
    }

    printf("o menor numero e: %d e o maior e: %d", n_menor, n_maior);
}