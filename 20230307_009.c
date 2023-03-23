#include <stdio.h>
#include <string.h>

int i;

int* ache(char *crt, char c, int *j){
	int k = 0;
	int onde1[100];
	int* onde = onde1[100];
	printf("Nome: %s\nLetra: %c\n", crt, c);
	for(i = 0 ; i< strlen(crt) ; i+=1){
			if(crt[i] == c){
				onde1[k] = i;
				k+=1;
				
			}	
	}
	
	*j = k;
	onde = onde1;
	return onde;
}
int main(){
	char crt[100], c;
	int j = 0;
	
	printf("defina sua frase: ");
	scanf("%[^\n]", crt);
	
	printf("qual o caractere que deseja achar? ");
	scanf(" %c", &c);
	
	int* onde = ache(&crt, c, &j);
	
	/*PRINT*/
	printf("(");
	for(i=0; i < j-1; i+=1){
		printf("%d, ", onde[i]);
	}
	printf("%d)", onde[j-1]);
	
	return 0;
}
