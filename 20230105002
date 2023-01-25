#include <stdio.h>

int gestacao(){
    int num;
    scanf("%d", &num);
    while(num < 0){
        printf("selecione um valor valido e tente novamente:\n");
        scanf("%d", &num);
    }
    return num;
}
void reav(int peso, int tempo){
    if (peso < 100 || tempo < 28){
        printf("Parto nao devera ser realizado, reavaliar clinicamente");
    }
    else if ((peso > 2500 && tempo > 28)||(1500 >= peso && peso <= 2000 && tempo > 36)){
        printf("parto normal");
    }else{
        printf("parto cesariana");
    }
}
    
int main(){
    int semanas, gramas;
    printf("qual o peso do feto?");
    gramas = gestacao();
    printf("quantas semanas de gestação já se passaram?");
    semanas = gestacao();
    reav(gramas, semanas);
    return 0;
}
