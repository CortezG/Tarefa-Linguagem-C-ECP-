#include <stdio.h>

void f(int *V1, int t1, int *maior, int *menor){
	int i;
	for(i=0 ; i < t1 ; i+=1){
		if (i == 0){
		*maior = *V1;
		*menor = *V1;
		}	
		if (*(V1+i) > *maior){
			*maior = *(V1+i);
		}
		if (*(V1+i) < *menor){
			*menor = *(V1+i);
		}
	}
}
int main(){
	int t1, maior, menor;
	int i;
	printf("qual o tamanho do primeiro vetor?\n");
    scanf("%d", &t1);
    
    int V1[t1];

    for (int i = 0; i < t1; i++) {
        printf("qual o %d valor do vetor?\n", i+1);
        scanf("%d", &V1[i]);
    }
	
    f(V1, t1, &maior, &menor);
    printf("Maior valor do vetor: %d\nMenor valor do vetor: %d", maior, menor);

    return 0;
}
