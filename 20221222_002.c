/*Escreva um programa em C que lê 15 valores reais, encontra
o maior e o menor deles e mostra o resultado.*/
#include<stdio.h>

int main () {

    float num;
    float num_maior;
    float num_menor;
    int i;
    printf("%f %f %f",num, num_maior, num_menor);
    for (i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &num);

        if (i == 0){
            num_maior = num;
            num_menor = num;
        }

        else if (num > num_maior){
            num_maior = num;
        }

        else if (num < num_menor){
            num_menor = num;
        }
    }

    printf("\nO maior numero e: %f \nO menor numero e: %f", num_maior, num_menor);  
}