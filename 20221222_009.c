#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, x, y, a, b, resultado, maior=0;
    printf("Valor de M =");
    scanf("%d", &m);
    printf("\nValor de N =");
    scanf("%d", &n);
    while(m<0 || n<0){
    	printf("tente com valores maiores que zero\n");
        if(m < 0){
            printf("valor para m:  ");
    	    scanf("%d", &m);
        }
        if(n < 0){
            printf("valor para n:  ");   
    	    scanf("%d", &n);   
        } 
    }
    for (x = 0; x <= m; x++){
        for (y = 0; y <= n; y++){
            resultado = x*y - x*x + y;
            if(resultado >= maior){
            maior = resultado;
            a = x;
            b = y;
            }
        }
    }
    printf("os valores de x e y para que haja o valor maximo sao de %d e % d cujo resultade é de %d",a, b, maior);
}