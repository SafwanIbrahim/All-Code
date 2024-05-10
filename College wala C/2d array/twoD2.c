#include <stdio.h>

int main ()
{   
    int n,m;
    printf("the value of row and column\n");
    scanf("%d%d",&n,&m);
    int aa[n][m];

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            scanf("%d",&aa[i][j]);
        }
    }
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            printf("%d ",aa[i][j]);
        }
        printf("\n");
    }

}