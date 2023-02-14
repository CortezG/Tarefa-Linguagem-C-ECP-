#include<stdio.h>
int fibonacci(x)
{
    int countconta=1, countposicao=1, ant=0, countsoma=0;
    
    while(countconta<x)
    {
        countsoma=ant+countconta;
        ant=countconta;
        countconta=countsoma;
        countposicao++;
        
        
        printf("%d cc \n", countconta);
        printf("%d ant \n", ant);
    }

    printf("%d \n", countposicao);
}

int main()
{
    int num, varfunc;
    
    printf("numero da sequencia");
    scanf("%d", &num);
    
    varfunc=fibonacci(num);
}
