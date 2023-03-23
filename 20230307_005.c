#include <stdio.h>

int f(int *num1, int *num2, int *num3){
	int V[3] = {*num1, *num2, *num3};
	int i;
	int maior;
	int menor;
	int meio;
	
	if(*num1 == *num2 && *num1 == *num3){
		return 1;
	}
	
	for(i=0;i<3;i+=1){
		if (i == 0){
		maior = V[i];
		menor = V[i];
		}
		if (V[i] > maior){
			maior = V[i];
		}
		if (V[i] < menor){
			menor = V[i];
		}
	}
	for(i=0;i<3;i+=1){
		if(V[i] > menor && V[i] < maior){
			meio = V[i];
		}
	}
	*num1 = menor;
	*num2 = meio;
	*num3 = maior;
	return 0;
}
int main(){
	int num1, num2, num3;
	printf("qual o primeiro valor?\n");
	scanf("%d", &num1);
	printf("qual o segundo valor?\n");
	scanf("%d", &num2);
	printf("qual o terceiro valor?\n");
	scanf("%d", &num3); 
	
    int resp = f(&num1, &num2, &num3);

    printf("Os valores ordenados:\n%d \n%d \n%d\n", num1, num2, num3);

    if (resp == 1) {
        printf("Os valores sao iguais\n");
    } else {
        printf("Os valores sao diferentes\n");
    }

    return 0;
}
