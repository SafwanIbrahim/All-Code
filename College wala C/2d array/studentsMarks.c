#include <stdio.h>

int main ()
{
    int st[4][2]={{1,100},{2,99},{3,98},{4,97}};

    int s;
    scanf("%d",&s);
    int marks[s][3];
    for (int i = 0;i <=s-1; i++)
    {
        for (int j = 0; j <= 3-1;j++) 
        {
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n");
    for (int i = 0;i <=s-1; i++)
    {
        for (int j = 0; j <= 3-1;j++) 
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
}