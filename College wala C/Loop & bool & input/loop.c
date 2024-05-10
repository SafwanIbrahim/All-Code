#include <stdio.h>

int main ()
{
    for (int i = 1 ; i <= 3 ; i++ )
    {
        printf("%d\n" ,i);
        if (i == 2)
        {
            break;
        }
    }
    
    for (int i = 1 ; i <= 3 ; i++ ) 
    {
        if (i == 2) 
        {
            continue;
        }
        printf("%d\n" ,i);
    }

    for (int j = 1 ; j <= 3 ; ) 
    {
        printf("%d\n" ,++j);
    }

    // While loop
    // int n = 1; 
    // while (n <= 3)
    // {
    //    printf("%d \n" , ++n); 
    // }
    // int m = 1; 
    // while (m <= 3)
    // {
    //    printf("%d \n" , m++); 
    // }
    


    return 0;
}