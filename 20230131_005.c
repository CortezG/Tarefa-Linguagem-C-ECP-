#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char valfa[30]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};
    char frase[30];
    char frasevazia;
    int i=0, lenfrase, lenalfa=26;

    printf("Frase:");
    fgets(frase, 30, stdin);

    lenfrase=strlen(frase);
    
    for(i=0; i<lenfrase; i++)
        for(j=0; j<lenalfa; j++)
        {
            if(frase[i] == valfa[j] && j+ 3 <lenalfa)
            {
                frase[i]=valfa[j+3];
            }
            else
            { 
                j = j + 3;
                j = j - lenalfa; 
                frase[i] = valfa[j];
            }
        }
  for (i = 0; i < lenfrase; i++)
    { 

        printf ("%c", frase[i]);
    }

}
