#include <stdio.h>



int main()
{   
    int n; 
    scanf("%d",&n);


    for (int i = 0; i < n/2; i++)
    {
        for (int j = n-(2 * i)-1; j > 0; j --)
        {
            printf(" ");
        }
        for (int j = 0; j < 1+ (2 * i); j++)
        {
            printf("* ");
        }
        printf("\n");
    } 
    for (int i = 1; i <= (n/2)+1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

    
    
} 
  
