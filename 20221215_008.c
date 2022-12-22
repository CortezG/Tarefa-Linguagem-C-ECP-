#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fir;
    float cel;

    printf("Informe um temperatura em celsius:");
    scanf("%f", &fir);

    fir = (cel*9/5) + 32;

    printf("Essa temperatura equivale a %0.2f firenheit", fir);

    return 0;
}
