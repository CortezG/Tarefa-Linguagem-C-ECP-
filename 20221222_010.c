#include <stdio.h>
#include <math.h>

int main(){
	int a = 1;
	int partida=-1;
	int n = -1;
	int n1, n2, n3, soma1, soma2, i;

	while (n < 0)
	{
		printf("\ndigite um valor para n (maior que zero): ");
		scanf("%d", &n);
	}	
	soma1 = n*n*n;
    while (a==1)
	{

		for (i = 0; i < n; i++)
		{
			
		}
		

		partida += 2;	
		n1 = partida;
		n2 = (partida + 2);
		n3 = (partida + 4);
		soma2 = n1 + n2 + n3;
		if (soma2 == soma1){
			a = 0;
		}
	}
	printf("\nOs impares consecutivos sao %d %d %d", n1, n2, n3);
}
