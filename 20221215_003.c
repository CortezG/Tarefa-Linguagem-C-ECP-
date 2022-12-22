#include <stdio.h>

int main ()
{

     float metros, centimetros;

     printf(“/n medida em metros para conversao: ”);
     scanf(“%f”, &metros);

     centimetros=metros*100;

     printf(“/n a medida em centimetros eh: %.2f”, centimetros);

     return 0;
}

