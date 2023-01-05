#include <stdio.h>

int main(){
    float i=1;
    float soma;
    float count=1;
   
    do
    {
        printf("\n\ni:%f  \ncount:%f \nsoma:%f", i, count, soma);
        soma = soma + (count / i);
        i++;
        count += 2;
        printf("\nsoma:%f", soma);
    } while (i < 51);
}
    
