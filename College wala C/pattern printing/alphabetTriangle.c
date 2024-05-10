#include <stdio.h>

int main ()

{   
    int n,m;

    printf("enter the value of n and m : \n");
    scanf("%d%d" ,&n,&m);

    for (int x = 65 ; x < 65+n ; x++)
    {
        for (int y = 65 ; y <= x; y++)
        {
            printf("%c",y);
        }
        printf("\n");
    }

    for (int x = 65+m ; x >= 65 ; x--)
    {
        for (int y = 65 ; y < x; y++)
        {
            printf("%c",y);
        }
        printf("\n");
    }

}