#include <stdio.h>

int main()
{
    int num;
    int cont=0;
    
    printf("Numero para a tabuada: \n");
    scanf("%d", &num);
    
    for (cont=0; cont<=9; cont++) {
        
        printf("%d x %d = %d \n",num,cont,num*cont);
    }
    
    return 0;
}