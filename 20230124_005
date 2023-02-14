#include <stdio.h>
#include <math.h>

int fatorial() {
    int n, i, fat;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    int numeros[n];

    printf("entre com %d elementos", n);
    for (i = 0; i<n; i++){
        printf("\n%d:", i);
        scanf("%d", &numeros[i]);
    }
    printf("fatorial de cada numero: ");
    for ( i = 0; i<n ; i++){
        if(numeros[i]< 0){
            printf("não existe fatorial de n < 0");
        }
        else{
            for(fat = 1; numeros[i]>1; numeros[i]--)
            {
                fat = fat * numeros[i];
            }
        printf("\n%d", fat);
      }
    }
    printf("\n");
    return 0;
    }


int main(){
    fatorial();
}
