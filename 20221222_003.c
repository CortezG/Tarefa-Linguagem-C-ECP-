/*Faça um programa que leia vários inteiros positivos e mostre,
no final, a soma dos números pares e a soma dos números ímpares. O
programa para quando entrar um número maior que 1000.
 */

int main(){

    int n;
    float si;
    float sp;
    float resto;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);  
        resto = n % 2;
        if (resto == 0 && n <= 1000){
            sp += n;
        }
        else if (resto != 0 && n <= 1000) {
            si += n;
        }

    } while (n <= 1000);
    
    printf("a soma dos numeros pares e: %.2f e dos impares e: %.2f", sp, si);
    
}

    
