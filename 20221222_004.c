#include <stdio.h>

int main() {

    int number;
    int count;
    int i;
    printf("Escreva um numero:");
    scanf("%d", &number);

    for ( i = 1; i <= 10; i++)
    {
        if(number % i == 0 ){
            count += 1;
        }
    }
    

    if (count > 2){
        printf("nao eh primo");
    }
    else{
        printf("eh primo");
    }
}
