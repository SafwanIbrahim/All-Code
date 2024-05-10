#include <stdio.h>

int main()

{
    for (int x = 10 ; x >= 1 ; x--) 
    {
        for (int y = 1 ; y <= x ; y++) 
        {
            printf("%d ",y);
        }
        printf("\n");
    }

    for (int z = 1; z <= 4 ; z++) 
    {
        for ( int x = 1; x <= z ; x++) 
        {
            printf("%d ",((x-1)+x));
        }
        printf("\n");
    }

    return 0;

}