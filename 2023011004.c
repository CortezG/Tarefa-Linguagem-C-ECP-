#include <stdio.h>
#include <stdlib.h>

int verifica = 1, verifie = 0;

int encaixa(int maior, int menor) {

  while (menor != 0 && maior % 10 == menor % 10) {
    maior = maior/10;
    menor = menor/10;
  }

  if (menor == 0)
    return verifica;
  else
    return verifie;
}

int main() {

  int num1, num2, seq, maior, menor;

  printf("Digite 2 inteiros maiores que 0: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    maior = num1;
    menor = num2;
  }
  else {
    maior = num2;
    menor = num1;
  }

  seq = verifie;
  while (maior >= menor) {
    if (encaixa(maior,menor) == verifica)
      seq = verifica;
    maior = maior/10;
  }
  if (seq == verifica)
    printf("%d Eh um segmento de %d\n",num2,num1);
  else
    printf("%d nao eh um segmento de %d\n",num2,num1);

  return 0;
}
