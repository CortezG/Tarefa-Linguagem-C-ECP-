#include <stdio.h>

int i;

int f(int *V1, int *V2, int *V3, int tam1, int tam2) {
    if (tam1 == tam2) {
        for (i = 0; i < tam1; i++) {
            *(V3 + i) = *(V1 + i) + *(V2 + i);
        }
    	return 1;
    }
    return 0;
}

int main() {
    int t1, t2;

    printf("qual o tamanho do primeiro vetor?\n");
    scanf("%d", &t1);

    printf("qual o tamanho do segundo vetor?\n");
    scanf("%d", &t2);

    int V1[t1], V2[t2], V3[t1];

    for ( i = 0; i < t1; i++) {
        printf("qual o %d valor do vetor 1?\n", i+1);
        scanf("%d", &V1[i]);
    }

    for ( i = 0; i < t2; i++) {
        printf("qual o %d valor do vetor 2?\n", i+1);
        scanf("%d", &V2[i]);
    }

    int ret = f(V1, V2, V3, t1, t2);

    if(ret == 1){
    	printf("O vetor 3 tem como valores: ");
    	printf("(");
    	for (int i = 0; i < t1-1; i++) {
        	printf("%d, ", *(V3+i));
    	}
    	printf("%d)", *(V3+(t1-1)));
	}else{printf("valores invalidos de tamanho");
	}
    return 0;
}
