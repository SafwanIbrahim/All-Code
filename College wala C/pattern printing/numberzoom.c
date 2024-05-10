#include <stdio.h>

int main ()
{   
    int n = 4;
    
    for (int x = 1 ; x <= (2*n)-1; x++)
    {
        for (int y = 1; y <= (2*n)-1 ; y++)
        {
            if (x==1 || x==(2*n)-1 || y == 1 )
            printf("%d",n);
        }
        printf("\n");
    }

}