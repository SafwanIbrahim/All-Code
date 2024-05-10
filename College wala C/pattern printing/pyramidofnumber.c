#include <stdio.h>

int main ()
{   
    int n;

    scanf("%d", &n);

    for (int x = 1; x <= n; x++)
    {
        for (int y = n ; y > x ; y--)
        {
            printf(" ");
        }
        for (int z = 1 ; z <= (2*x)-1 ; z++)
        {
            printf("%d",z);
        }
        printf("\n");
    }
}