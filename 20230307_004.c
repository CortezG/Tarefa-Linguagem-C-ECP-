#include <stdio.h>
int main(){
	int i;
	int A[8];
	for(i=0;i<8;i+=1){
		printf("Qual o %d valor?", i+1);
		scanf("%d", A+i);
	}
	printf("\n");
	int* P = A;
	for(i=0;i<8;i+=1){
		printf("O dobro de %d eh %d\n", *P+i, *(P+i)*2 );
	}
	printf("\nEndereco dos pares:\n\n");
	for(i=0;i<8;i+=1){
		if((*P+i) % 2 == 0){
			printf("O indereco de %d eh %d\n", *P+i, P+i);
		}
	}
}
Footer
