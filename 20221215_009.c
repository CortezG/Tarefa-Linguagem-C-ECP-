#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1;
    int n2;
    float n3;
    float equacao1, equacao2, equacao3;



    printf("número 1 (inteiro):");
    scanf("%d",&n1);

    printf("número 2 (inteiro):");
    scanf("%d",&n2);

    printf("número 3 (real):");
    scanf("%f",&n3);

    equacao1 = n1*n2;
    equacao2 = (3*n1) + n3;
    equacao3 = n3*n3*n3;


     printf("\n o produto do dobro do primeiro com metade do segundo é = %.1f", equacao1);
     printf("\n a soma do triplo do primeiro com o terceiro = %.1f", equacao2);
     printf("\n o terceiro elevado ao cubo = %.1f", equacao3);

    return 0;
}
