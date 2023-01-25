#include <stdio.h>

int fib(int n){
	int i, Fn=0, n1=1, n2=1, n3=0;
	if( n == 1 || n == 2 ){
		return 1;
	}
	for(i=1; i<=n-2 ; i++){
		n3 = (n1 + n2);
		n2 = n1;
		n1 = n3;
	}
	return n3;
}
int main(){
    int n, numf;
	printf("defina a posicao do numero de fibonacci: ");
    scanf("%d", &n);
	while(n<0){
		printf("apenas numeros positivos sao validos\ntente novamente\ndefina a posicao do numero de fibonacci: ");
		scanf("%d", &n);
	}
    numf = fib(n);
	printf("O numero de fibonacci na posicao %d eh: %d", n,numf);
	return 0;
}
