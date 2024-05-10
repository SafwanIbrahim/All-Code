#include <stdio.h>

int main ()
{


    int r,c;
    scanf("%d%d",&r,&c);
    int m1[r][c];
    int m2[r][c];
    int m3[r][c];


    for (int i = 0;i <=r-1; i++)
    {
        for (int j = 0; j <= c-1; j++) 
        {
            scanf("%d",&m1[i][j]);
            
        }
    }
    // for (int i = 0;i <=r-1; i++)
    // {
    //     for (int j = 0; j <= c-1; j++) 
    //     {
    //         scanf("%d",&m2[i][j]);
    //     }
    // }
    int sum = 0;
    for (int i = 0;i <=r-1; i++)
    {
        for (int j = 0; j <= c-1; j++) 
        {
        //    printf("%d ",m1[i][j]+m2[i][j]);
        sum+=m1[i][j];

        }
    }
    printf("\n%d",sum);

    // printf("\n");
    // for (int i = 0;i <=r-1; i++)
    // {
    //     for (int j = 0; j <= c-1;j++) 
    //     {
    //         printf("%d ",m3[i][j]);
    //     }
    //     printf("\n");
    // }
}