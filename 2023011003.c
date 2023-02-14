#include <stdio.h>

int ContadorDeDigitos(int num1, int num2){
	int cont1 = 1;
	int cont2 = 0;
	int count = 0;
	int num1f, num2f,i, resto;


	cont1 = 0;
	cont2 = 1;
	printf("\nDigite um numero:");
	scanf("%d", &num1);
	printf("\nDigite outro numero:");
	scanf("%d", &num2);
	num1f = num1;
	while (num1f > 0){
		num1f /= 10;
		cont1++;
	}
	num2f = num2;
	while (num2f > 0){
		num2f /= 10;
		cont2=cont2*10;
	}
	
    printf("\ncont1: %d\ncont2: %d", cont1, cont2);
    
    resto = num1%cont2;
    printf("\n%d", resto);
    
    if (resto == num2){
        printf("\ncorresponde");
        
    }
	else{
	    printf("\nao corresponde");
	}
}
int main(){
    ContadorDeDigitos(1,1);
}
