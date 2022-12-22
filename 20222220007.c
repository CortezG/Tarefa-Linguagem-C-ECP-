#include <stdio.h>

int main () {

    float nota1, nota, nota3;
    float media=0;
    float maior=0;
    float menor=0;
    
    printf("Insira a nota: ");
    scanf("%f %f %f", &nota1, &nota, &nota3);
    if (nota1>nota && nota1>nota3) {
        maior = nota1;
    }
    else if (nota>nota3 && nota>nota1){
        maior = nota;
    }
    else if (nota3>nota1 && nota3>nota){
        maior = nota3;
    }
    
    if (nota1<nota && nota1<nota3) {
        menor = nota1;
    }
    else if (nota<nota3 && nota<nota1){
        menor = nota;
    }
    else if (nota3<nota1 && nota3<nota){
        menor = nota3;
    }
    else if (nota1==nota==nota3){
        printf("As notas sao todas iguais a %f", nota1);
    }
    media=(nota1+nota+nota3)/3;
    printf("A maior nota eh %.2f, a menor eh %.2f e a media eh %.2f", maior, menor, media);
    
    return 0;
}