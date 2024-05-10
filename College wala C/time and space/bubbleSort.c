#include <stdio.h>

int main()
{
    int a[5]={5,4,3,2,1};    // sort in ascending order 
    int y = 5-2;
    int red;

    for (int x = 1; x <= 5-1; x++)  // it will run 4 times (max)
    {
       red = 0;
       for (int i = 0; i <= y;i++)
        {
            if (a[i]>a[i+1])
            {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1]= tmp;
                red = 1;
            }
        }
        if (red == 0) break;
        y--;
    }   
    printf("sorted array in ascending order : ");
    for (int h = 0; h<=5-1; h++)
    {
        printf("%d ",a[h]);
    }
    
    
    
    
    int blue;
    y=5-2;
    int da[5]={1,40,3,2,1}; // sort in descending order 
    for (int x = 1; x <= 5-1; x++)  // it will run 4 times (max)
    {
       for (int i = 0; i <= y;i++)
        {
            blue = 0;
            if (da[i]<da[i+1])
            {
                int tmp = da[i];
                da[i] = da[i+1];
                da[i+1]= tmp;
                blue = 1;
            }
        }   
        if (blue == 0) break;
        y--;
    }   
    printf("\nsorted array in descending order : ");
    for (int h = 0; h<=5-1; h++)
    {
        printf("%d ",da[h]);
    }
    printf("\n"); 
}