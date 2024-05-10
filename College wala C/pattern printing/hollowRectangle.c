#include <stdio.h>

int main ()
{   
    int r,c;

    printf("enter Row and Column : \n");

    scanf("%d%d", &r,&c);

    for (int x = 1 ; x <= r ; x++)
    {
        for (int y = 1 ; y <= c ; y++)
        {
            if (x == 1 || x == r || y==1 || y==c) 
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