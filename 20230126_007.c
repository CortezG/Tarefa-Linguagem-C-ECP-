
#include<stdio.h>
int main()
{
    int matrizA[2][2];
    int linha, coluna, somaDP, somaDS, nviagens, it=0;
    for(linha=0; linha<2; linha++)
    {
        for(coluna=0; coluna<2; coluna++)
        {
            printf("Valor na posicao linha[%d] e coluna[%d]", linha, coluna);
            scanf("%d", &matrizA[linha][coluna]);
            
        }
    }
    for(linha=0; linha<2; linha++)
    {
        for(coluna=0; coluna<2; coluna++)
        {
        printf("%d ", matrizA[linha][coluna]);
        }
    printf("\n");
        
    }
    


    printf("Num de viagens");
    scanf("%d", &nviagens);
    int vettraj1[nviagens], vettraj2[nviagens], ittraj1, somavalores=0, somafinal=0;
    for(it=0; it<nviagens; it++)
    {
        printf("trajeto(ordem)");
        scanf("%d", &vettraj1);
    }


    for(ittraj1=0; ittraj1<nviagens; ittraj1++)
    {
        somavalores+=matrizA[ittraj1][ittraj1+1];
    }

    somafinal=somavalores+matrizA[-1][0];
    printf("%d", somafinal);
}  