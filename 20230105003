#include <stdio.h>
int par(){
    int num;
    printf("defina um valor par para saber se eh perfeito: ");
    scanf("%d", &num);
    while (num % 2 != 0){
        printf("valor invalido\ndefina um valor valido (par): ");
        scanf("%d", &num);
    }
    return num;
}
void perfeito(int num){
    int i, soma=0;
    for (i = 1; i<num; i++){
        if (num%i == 0){
            soma += i;
        }
    }
    if (num != 0 && num==soma){
        printf("O numero %d eh perfeito!\n", num);
    }else {
        printf("O numero %d nao eh perfeito.\n", num);
    }
}

int main(){
    int num;
    num = par();
    perfeito(num);
    return 0;
}
