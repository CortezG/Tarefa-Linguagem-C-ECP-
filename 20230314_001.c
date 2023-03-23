#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;

void mediaDesvio(float *notas, int na, float *media, float *desvio){
	float soma=0;
	float dv = 0;
	for(i=0;i<na;i+=1){
		printf("qual a nota do %d aluno? ", i+1);
		scanf("%f", (notas+i));
		soma += *(notas+i);
	}
	*media = soma/na;
	for(i=0;i<na;i+=1){
		dv += (pow(*(notas+i) - *media, 2)/na);
	}
	*desvio = sqrt(dv);
}

int main(){
	int na;
	float *notas;
	float media, desvio;
	printf("qual a quantidade de alunos?");
	scanf("%d", &na);
	notas = (float *) malloc ( na * sizeof(float));
	mediaDesvio(notas, na, &media, &desvio);
	printf("media: %f\ndp: %f", media, desvio);
		
}
