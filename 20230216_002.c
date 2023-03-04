#include<stdio.h>
void inter (int conjgeral[], int quantconjgeral, int quantconj)
{
    int i, j, k, count=0, taminter=0, inter[taminter];
    
    //for p colocar os elementos num mesmo vetor a partir da ultima quantidade de elementos nas primeiras posicoes
    for(k=1; k<quantconjgeral+1; k++)
    {
        printf("elemento na posicao %d", k);
        scanf("%d", &conjgeral[k]);
    }
    
    //for p contar qnts vezes se repete 
    for(j=1; j<quantconjgeral; j++)
    {
        for(k=j+1; k<quantconjgeral; k++)
        {
            if(conjgeral[k]==conjgeral[j])
            {
                count++;
                if(count==quantconj-1)
                {
                    taminter++;
                    inter[taminter]=conjgeral[k];
                }
            }
        }
    }
    
    inter[0]=taminter;
    for(i=0; i<taminter+1; i++)
    {
        printf("%d, ", inter[i]);
    } 
}
int main()
{
    int quantconj, i;
    
    printf("quant conj: ");
    scanf("%d", &quantconj);
    
    int quantconjvetor[quantconj], quantconjgeral;
    
    //for p pegar a qnt de elementos de cada vetor
    for(i=0; i<quantconj; i++)
    {
        printf("qual o tamanho do %d vetor", i+1);
        scanf("%d", &quantconjvetor[i]);
        quantconjgeral+=quantconjvetor[i];
    }
    
    int conjgeral[quantconjgeral];
    
    inter(conjgeral, quantconjgeral, quantconj);
    
   
}
