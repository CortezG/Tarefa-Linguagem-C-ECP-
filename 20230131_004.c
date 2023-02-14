#include <stdio.h>
#include <string.h>

char s1[20], s2[20];

void a(){
    printf("\nS1: ");
    scanf("%s", s1);
}

void b(){
    printf("\ntamanho: %d",  strlen(s1));
}

void c(){
    printf("\nescreva a str2 (ate 20 crc): ");
    scanf("%s", s2);

    if (strcmp(s1, s2) == 0) {
        printf("iguais");
    }
    else{
        printf("nao sao iguais \n");
    }
}

void d(){
    
    printf(strcat(s1, s2));
    printf("\n ");
}

void e(){
    int i;
    for (i = strlen(s1); i >= 0; i--){
        printf("%c\n", s1[i]);
    }

}
void f (){
    int i, count;
    char crc;
    printf("crc: ");
    scanf(" %c", &crc);
    for (i=0; i<strlen(s1); i++){
        if (crc == s1[i]){
            count += 1;

        }
    }
    printf("o carcter aparece %d vezes", count); 

}

void g(){
    char crc1, crc2;
    int count, count2;
    printf("crc1:  ");
    scanf(" %c", &crc1);
    
    printf("\ncrc2:  ");
    scanf(" %c", &crc2);

    while (count < 20) 
    {
        if(s1[count]==crc1 && count2 = 0){
            s1[count] =crc2;
            count2=1;
        }
    count++;
    }
    printf("\n%s", s1);
}

int main(){
    a();
    b();
    c();
    d();
    e();
    f();    
}
