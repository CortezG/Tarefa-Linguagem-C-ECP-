#define MAX 100
int main()
{
    int m1[MAX][MAX]={{1,1,1},{2,2,2},{3,3,3,},{4,4,4},{5,5,5}};
    int m2[MAX][MAX]={{5,5,5},{4,4,4},{3,3,3,},{2,2,2},{1,1,1}};
    somanxn(m1,m2,5,3,5,3);
    return 0;
}

void somanxn(int a[MAX][MAX], int b[MAX][MAX], int fa, int ca, int fb, int cb){
    int filas, colunas;
    if (fa != fb || ca !=cb){
        printf ("As matrizes não tem a mesma ordem");
        return;
    }
    for (filas=0;filas<fa;filas++){
        printf ("\n");
        for (colunas=0;colunas<ca; colunas++){
            printf (" %d", a[filas][colunas]+b[filas][colunas]);
        }
    }
}
