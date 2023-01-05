#include<stdio.h>
#include <math.h>
int main(){
    float massa;
    float massai;
    int voltas;
    int time2;
    int horas;
    int minutos;
    int segundos;

    printf("Massa: ");
    scanf("%f", &massa);
    massai = massa;
    do
    {
        massa = massa/2;
        voltas++;         
    } while (massa>0.5);
    time2 = 50* voltas;
    horas = trunc(time2/3600);
    minutos = trunc(time2 - horas*3600)/60;
    segundos = time2 - minutos*60 - horas*3600;

    printf("Massa inicial: %.2f\nMassa final: %.2f\nTempo total: %d horas %d minutos e %d segungos ",massai, massa, horas, minutos, segundos);
}