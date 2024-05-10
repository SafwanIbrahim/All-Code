#include <stdio.h>

int main()
{


    int n;

    scanf("%d", &n);

    for (int x = 1 ; x <= n ; x+=1)
    {   
        for (int z = n ; z > x ; z-=1) 
        {
            printf(" ");
        }

        for (int y = 1 ; y <= 2*(x-1)+1 ; y++) 
        {
            printf("S");
        }

        printf("\n");
    }
 




    return 0;
}