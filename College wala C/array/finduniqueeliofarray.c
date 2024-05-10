#include <stdio.h>

int main ()
{   
    
    int a[]={6,4,5,2,4,5,2,1,1};

    for (int i = 0; i <=8; i++) 
    {
        int flag = 0;
        for (int j = 0; j <= 8; j++) 
        {
            if (i == j) 
            {
                continue;
            }

            if (a[i] == a[j]) 
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) 
        {
            printf("%d ",a[i]);
            break;
        }    
    }   
    return 0;
}