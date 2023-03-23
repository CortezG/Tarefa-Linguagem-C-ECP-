
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i;

int *le(int *vetor, int *n){
	
	printf("quantos valores seraoo colocados no vetor? ");
	scanf("%d", n);
	
	vetor = (int*) malloc ( *n * sizeof(int ));
	
	for( i=0 ; i < *n ;i+=1){
		printf("qual sera o valor do %d numero? ", i+1);
		scanf("%d", (vetor+i));
	}
	return vetor;
}

void mm(int *vetor, int *maior, int *menor, int *tamanho){
	*maior = *vetor;
	*menor = *vetor;
	for(i=1; i < *tamanho ; i+=1){
		if (*(vetor + i) > *maior){
			*maior = *(vetor + i);
		}
		if (*(vetor + i) < *menor){
			*menor = *(vetor + i);
		}	
	}
		
}

int main(){
	int *vetor, n, maior, menor;
	vetor = le(vetor, &n);
	mm(vetor, &maior, &menor, &n);
	printf("O maior valor eh: %d\nO menor valor eh: %d", maior, menor);
	free(vetor);
}
