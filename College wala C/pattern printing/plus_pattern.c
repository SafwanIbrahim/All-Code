#include <stdio.h>

int main ()
{   
    int n;

    // scanf("%d" ,&n);

    // for (int x = 1 ; x <= n ; x++)
    // {
    //     if (x == (n/2)+1) 
    //     {
    //         for (int y = 1; y <= n; y++) 
    //         {
    //             printf("*");
    //         }
            
    //         printf("\n");
    //         continue;
        
    //     }
    //     for (int z = 1; z <= (n/2); z++)
    //     {
    //         printf(" ");
    //     }
    //     printf("*\n");
        
    // }

    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1 ; y <= 5; y++)
        {
            if (y == 3 || x == 3)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}