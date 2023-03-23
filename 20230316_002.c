#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i, j;
	int l, c;
	int **matriz;
	printf("quantas linhas tera? ");
	scanf("%d", &i);
	printf("quantas colunas tera? ");
	scanf("%d", &j);
	
	/*alocação*/
	matriz = (int **) malloc (i * sizeof(int *));
	for(l = 0; l < i ;l+=1){
		*(matriz+l) = (int *) malloc (j * sizeof(int));
	}
	
	for(l = 0 ; l<i; l+=1){
		for(c=0; c < j ; c+=1){
			printf("qual sera o valor da matriz em [%d][%d]: ", l, c);
			scanf("%d", (*(matriz+l)+c));
		}	
	}
	printf("\n");
	/*a) Imprima os valores da matriz usando aritmética de ponteiros*/
	printf("por ponteiro:");
	for(l = 0 ; l<i; l+=1){
		printf("\n");
		for(c=0; c < j ; c+=1){
			printf("%d ", *(*(matriz+l)+c));
		}	
	}
	printf("\n\n");
	
	/*b) Imprima os valores da matriz usando indexes.*/
	printf("por indexe:");
	for(l = 0 ; l<i; l+=1){
		printf("\n");
		for(c=0; c < j ; c+=1){
			printf("%d ", matriz[l][c]);
		}	
	}
	
	/*c) Liberar a área de memória alocada pela matriz..*/
	for(l = 0; l < i ;l+=1){
		free(matriz+l);
	}
	free(matriz);
}
