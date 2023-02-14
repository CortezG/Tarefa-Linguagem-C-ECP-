#include<stdio.h>
int escalar()
{
    int i, tamvetor, produto=0;
    
    printf("tamanho dos vetores: ");
    scanf("%d", &tamvetor);
    
    int vetorx[tamvetor], vetory[tamvetor];
    
    
    for(i=0; i<tamvetor; i++)
    {
        printf("valor na posicao [%d] no vetor x", i);
        scanf("%d", &vetorx[i]);
    }
    
    for(i=0; i<tamvetor; i++)
    {
        printf("valor na posicao [%d]", i);
        scanf("%d", &vetory[i]);
    }
    
    for(i=0; i<tamvetor; i++)
    {
        produto+=vetorx[i]*vetory[i];
    }
    
    printf("o produto escalar eh %d", produto);
    
    return produto;
}

int main()
{
    escalar();
}
