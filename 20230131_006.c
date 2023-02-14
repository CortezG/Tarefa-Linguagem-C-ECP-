#include<stdio.h>
#include<string.h>
int main()
{
    char palavra[30];
    char invertida[30];
    int i, lenstr, count=0;
    
    printf("string: ");
    scanf("%s", palavra);
    
    lenstr=strlen(palavra);
    
    for(i=lenstr; i>=0; i--)
    {
        invertida[i]=palavra[i];
    }
    
    for(i=0; i<lenstr; i++)
    {
        if(invertida[i]==palavra[i])
        {
            count++;
        }
    }
    
    if(count==lenstr)
    {
        printf("palindromo");
    }
    else
    {
        printf("nao e pelindromo");
    }
   
    return 0;
}
