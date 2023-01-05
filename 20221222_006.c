#include <stdio.h>
int main (){
    int number;
    int count=1;
    int soma=0;
    printf("Escolha um numero: ");
    scanf("%d",  &number);
    do
    {       
        if (number % count == 0){
            soma = soma + count;
            count++;  
        }
        else{
            count++;        
        }
    } while (count < number);
    if (soma == number) {
        printf("O numero %d eh perfeito", number);
    }
    else{
        printf("O numero %d nao eh perfeito", number);
    }

    }
    
