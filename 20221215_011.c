#include <stdio.h>
#include <stdlib.h>
int main()
{
    float horasTrabalho, SalarioBruto, horasSalario, INSS, sindicato, ImpostoRenda, impostosTotais, SalarioLiq

    impostosTotais = 76/100;

     printf("Quanto voc� ganha por hora?");
    scanf("%f",&horasSalario);

    printf("Quantas horas voc� trabalho ao m�s?");
    scanf("%f",&horasTrabalho);

    SalarioBruto = horasSalario * horasTrabalho;

    INSS = SalarioBruto * 8/100;
    sindicato = SalarioBruto * 5/100;
    ImpostoRenda = SalarioBruto * 11/100;
    SalarioLiq = SalarioBruto * impostosTotais;

    printf("\n seu salario bruto � =.%1f", SalarioBruto);
    printf("\n seu sal�rio l�quido � = %.1f", SalarioLiq);
    printf("\n seu INSS custou = %.1f", INSS);
    printf("\n seu imposto de renda custou = %.1f", ImpostoRenda);
    printf("\n voc� pagou isso ao sindicato = %.1f", sindicato);

}
