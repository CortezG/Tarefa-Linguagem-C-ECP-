#include <stdio.h>
#include <stdlib.h>

int main7()
{
    float fir;
    float cel;

    printf("Informe um temperatura em Firenheit:");
    scanf("%f", &fir);

    cel = (5 * (fir-32) / 9);

    printf("Essa temperatura equivale a %0.2f celsius", cel);

    return 0;
}
