#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i, j;
	int l, c;
	double **matriz1, **matriz2;
	
	printf("quantidade de linhas nas matrizes: ");
	scanf("%d", &l);
	printf("quantidade de colunas nas matrizes: ");
	scanf("%d", &c);
	
	/*alocação m1*/
	matriz1 = (double**) malloc (l * sizeof(double*));
	for(i=0; i < l ; i+=1)
 		*(matriz1+i) = (double*) malloc (c * sizeof(double));
 	
	matriz2 = (double**) malloc (l * sizeof(double*));
	for(i=0; i < l ; i+=1)
 		*(matriz2+i) = (double*) malloc (c * sizeof(double));
 		
	for (i=0 ; i<l ; i+=1){
		for (j=0;j<c;j+=1){
			printf("qual o valor da primeira matriz em [%d][%d]: ", i, j);
			scanf("%lf", (*(matriz1 +i)+j));
		}
	}
	for (i=0 ; i<l ; i+=1){
		for (j=0;j<c;j+=1){
			printf("qual o valor da segunda matriz em [%d][%d]: ", i, j);
			scanf("%lf", (*(matriz2+i)+j));
		}
	}		
	for (i=0 ; i<l ; i+=1){
		printf("\n");
		for (j=0;j<c;j+=1){
			printf("%.1lf ", (*(*(matriz1+i)+j)+*(*(matriz2+i)+j)));
		}
	}	
}
