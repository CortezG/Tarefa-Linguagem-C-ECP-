#include<stdio.h>
#include<string.h>
int main()
{
    char carro[5];
    int consumo[5];
    int resultado[5];
    int i, indexecono;
    
    for(i=0; i<5; i++)
    {
        printf("carro:");
        scanf("%s", &carro[i]);
    }
    
    for(i=0; i<5; i++)
    {
        printf("consumo:");
        scanf("%d", &consumo[i]);
    }
    
    
    for(i=0; i<5; i++)
    {
        if(consumo[i]>consumo[indexecono])
        {
           indexecono=i;
        }
    }
    
    printf("carro mais economico: %c", carro[indexecono]);
    
    
    for(i=0; i<5; i++)
    {
        printf("litros por 1000km rodados: %d \n", 1000/consumo[i]);
    }
    return 0;
    
} 
