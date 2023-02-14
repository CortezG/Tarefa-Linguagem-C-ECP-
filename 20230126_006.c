
#include<stdio.h>
int main()
{
    int matrizA[5][5];
    int linha, coluna, somaDP, somaDS;
    for(linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            printf("Valor na posicao linha[%d] e coluna[%d]", linha, coluna);
            scanf("%d", &matrizA[linha][coluna]);
            
        }
    }
    for(linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
        printf("%d ", matrizA[linha][coluna]);
        }
    printf("\n");
        
    }
    

	for (linha = 0; linha < 5; linha++) {
		somaDP += matrizA[linha][linha];
	}
	

	for (linha = 0; linha < 5; linha++) {
		somaDS += matrizA[linha][5-linha-1];
	}
	

	printf("\nSoma das linhas: ");
	int vetL[5];
	for (linha = 0; linha < 5; linha++) {
		vetL[linha] = 0;
		for (coluna = 0; coluna < 5; coluna++) {
			vetL[linha] += matrizA[linha][coluna];
		}
	}
	for (linha = 0; linha < 5; linha++) {
		printf("%i ", vetL[linha]);
	}
	

	printf("\nSoma das colunas: ");
	int vetC[5];
	for (coluna = 0; coluna < 5; coluna++) {
		vetC[coluna] = 0;
		for (linha = 0; linha < 5; linha++) {
			vetC[coluna] += matrizA[linha][coluna];
		}
	}
	for (linha = 0; linha < 5; linha++) {
		printf("%i ", vetC[linha]);
	}
	
	printf("\nsoma diagonal principal %i e secundária %i\n", somaDP, somaDS);

	int varL = 1, varC = 1;
	for (linha = 1; linha <  5; linha++) {
		if (vetL[linha] != vetL[linha-1]) {
			varL = 0;
			break;
		} else if (vetC[linha] != vetC[linha-1]) {
			varC = 0;
			break;
		}
	}
	
	if (varL && varC && somaDP == somaDS && somaDP == vetL[0]) {
		printf("Quadrado magico");
	} else {
		printf("Quadrado nao magico");
	}

	return 0;
}
