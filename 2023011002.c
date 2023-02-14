#include <stdio.h>
int contar(int num, int d){
	int cont=0, z;
    while (num > 0){
        if ((num%10)==d)
            cont++;
			z =num/10;
			
        num=num/10;
    }
	
    return cont;
}

int ContadorDeDigitos(int num1, int num2){
	int cont1 = 1;
	int cont2 = 0;
	int i, a, b;
	int count = 0;
	int num1f, num2f;

	while (cont1!= cont2)
	{
		cont1 = 0;
		cont2 = 0;
		printf("\nDigite dois numeros de tamanho igual");
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
			cont2++;
		}
		if (cont1 != cont2){
			printf("Os numeros digitados tem quantidades de digitos diferentes");
		}
	}

	for ( i = 0; i < 10; i++){		
			
		a = contar(num1, i);
		b = contar(num2, i);
		if (a == b && a >0 && b>0)
		{
			count++;
		}
		
	}

	if (cont1 == count )
	{
		printf("\ne permutacao");
	}
	else{
		printf("\nnao e permutacao");
	}	

	return cont1;
	
}

int main(){
	ContadorDeDigitos(1,1);
}
