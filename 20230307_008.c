#include <stdio.h>

void troca(float *a, float *b){
	float pt1 = *a, pt2 = *b;
	*a = pt2;
	*b = pt1;
}

int main(){
	float a, b;
	
	printf("qual o valor de \"a\"? ");
	scanf("%f", &a);
	printf("qual o valor de \"b\"? ");
	scanf("%f", &b);
	
	troca(&a, &b);
	printf("Novo \"a\" = %.2f\nNovo \"b\" = %.2f", a, b);
	
	}
