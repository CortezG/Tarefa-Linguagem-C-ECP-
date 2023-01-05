#include <stdio.h>
int main() {
    int c1, c2, h, k;
    printf("Hipotenusa Maxima:");
    scanf("%d", &h);
    while(h <= 0){
        printf("Digite um valor maior que zero\nHipotenusa maxima: \n");
        scanf("%d", &h);
        }
    for (c1 = 1; c1 <= h; c1++){
        for (c2 = 1; c2 <= c1; c2++){
            for(k= 1; k<=h; k++){
                if ((c2*c2) + (c1*c1) == k*k){
                    printf("Catetos %d e %d tem como hipotenusa = %d\n", c1, c2, k);
                }
            }
        }
    }
  return 0;
}