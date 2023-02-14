#include<stdio.h>
int fat(n)
{
    int count=1, fatorial=1;
    
    while(count<=n)
    {
        fatorial*=count;
        count++;
    }
    
    printf("%d", fatorial);
    return fatorial;
}

int main()
{
    int num, varfatorial, count=1, fatorial=1;
    
    printf("numero para fatorial: ");
    scanf("%d", &num);
    
    varfatorial=fat(num, count, fatorial);
    
}
