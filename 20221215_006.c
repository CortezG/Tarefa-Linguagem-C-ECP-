#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ganho;
    float hora;
    float sal;

    printf("Quanto vc ganha por hora: ");
    scanf("%f", &ganho);


    printf("Quantas horas voce trabalha por mes: ");
    scanf("%f", &hora);

    sal = ganho*hora;

    printf("voce ganha %0.2f por mês", sal);
}
