#include <stdio.h>
#include <math.h>

int decimal(int num) {
    int e = 0, resto = 0, dec = 0;
    printf("%d = ", num);
    while (num > 0) {
        resto = num % 10;
        num = num / 10;
        dec += resto * (pow(2, e));
        e+=1;
    }
    printf("%d \n", dec);
}

int main(){
    int num;
    printf("digite o numero binario= ");
    scanf("%d", &num);
	decimal(num);
    return 0;
}
