#include <stdio.h>

int main () {
    
    float num;
    float ap1;
    float ap2;
    float delta;

    do {
        printf("Deseja calcular a raiz para qual numero: ");
        scanf("%f", &num);
    } while (num < 0);

    ap1 = num/2;

    do {
        ap2 = ap1 - (ap1*ap1 - num)/(2*ap1);
        delta = (ap2 - ap1);
        if(delta < 0){
            delta = delta*(-1);
        }

        ap1 = ap2;
        
    } while (delta > 0.1); 

    printf("\n%f", ap1);

}