#include <stdio.h>

int main() {
    int i = 2;
    double j = 32.22;
    char a = 'a';

    int* ii = &i;
    double* jj = &j;
    char* aa = &a;

    printf("o inteiro: %d, o real: %.3f, o char: %c\n ", *ii, *jj, *aa);

    *ii = 4;
    *jj = 3;
    *aa = 'b';

    printf("o inteiro: %d, o real: %.3f, o char: %c ", *ii, *jj, *aa);
    return 0;
}
