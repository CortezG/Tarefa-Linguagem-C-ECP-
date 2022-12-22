#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("nota 1: ");
    scanf("%f", &nota1);

    printf("nota 2: ");
    scanf("%f", &nota2);

    printf("nota 3: ");
    scanf("%f", &nota3);

    printf("nota 4: ");
    scanf("%f", &nota4);


    media = (nota1+nota2+nota3+nota4)/4;

    printf("sua media é %0.2f", media);
}

