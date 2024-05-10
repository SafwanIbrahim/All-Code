#include <stdio.h>

int main ()
{   
    int a[5]={3,13,75,0,5};

    for (int i = 1; i <= 5-1; i++)      //we need n-1 passes in max
    {   
        int red = 0;
        for (int j = i ; j >=1 ; j--) 
        {
            if (a[j-1]>a[j])
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1]= tmp;
                red = 1;
            }
            if (red == 0) break;

        }
        
        // int j = i;
        // while (a[j-1]>a[j] && j>0)
        // {
        //     int tmp = a[j];
        //     a[j] = a[j-1];
        //     a[j-1] = tmp;
        //     j--;
        // }
    }
    for (int i = 0; i <= 5-1; i++)
    {
        printf("%d ",a[i]);
    }



    return 0;
}