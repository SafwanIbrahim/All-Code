#include <stdio.h>

int main ()
{
    int aa[2][2]={{9,9},{0,0}};

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d ",aa[i][j]);
        }
        printf("\n");
    }

}