#include <stdio.h>
#include <string.h>
#include <ctype.h>
void tpf(char a[50]){
	int i;
	for(i = strlen(a)-1 ; i >= 0 ; i--){
		printf("%c", a[i]);
	}	
	printf("\n");
}

void isv(char a[50]){
	int i;
	for(i = 0 ; i <= strlen(a)-1 ; i+=1){
		if(a[i]!='a' && a[i]!='A' && a[i]!='e' && a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U'){
			printf("%c", a[i]);
		}
	}
	printf("\n");		
}

void maius(char a[50]){
	int i; 
	for(i = 0 ; i <= strlen(a)-1 ; i+=1){
	a[i] = toupper(a[i]);	
	}
	printf("%s", a);
	printf("\n");
}

void volta(char a[50]){
	int i, cont = 0;
	char l;
	printf("qual a letra a procurar?\n");
	scanf(" %c", &l);
	for(i=0 ; i<=strlen(a) ; i+=1){
		if (a[i] == l){
			cont+=1;			
		}
	}
	printf("a letra %c apareceu %d vezes", l, cont);
}	
void apaga(char a[50]){
	int i, cont=0;
	char carac;
	printf("qual caractere a ser apagado?\n");
	scanf(" %c", &carac);
	
	for(i = 0 ; i <= strlen(a)-1 ; i+=1){
		if (a[i] != carac && a[i] != toupper(carac)){
			printf("%c", a[i]);
		} 	
	}
	printf("%c", a[i]);
}		


int main(){
	char a[50];
	int i, j;
	printf("escreva: ");
	scanf("%s", a);
	tpf(a);	
	isv(a);
	maius(a);
	volta(a);
	apaga(a);
}
