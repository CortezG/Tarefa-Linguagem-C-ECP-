#include<stdio.h>
int fat(int n){
    int i, fatr=1;
    for( i=1 ; i <= n ; i += 1){
        fatr *= i;
    }
    return fatr;
}
int main(){
    int n, fatorial;
    printf("defina um valor para que seja feita o fatorial: ");
    scanf("%d", &n);
    while(n<0){
        printf("numeros negativos nao tem fatorial\ndefina um valor valido: ");
        scanf("%d", &n);
    }
    fatorial = fat(n);
    printf("O fatorial de %d eh igual a %d", n, fatorial);
    return 0;
}
