#include <stdio.h>

int main ()
{
    int a[]={2,5,4,3,2};

    for (int x = 0; x <= 4; x++) 
    {
        for (int y = x+1; y <= 4;y++) 
        {
            if (a[x] == a[y]) {
                printf("%d",a[x]);
                break;
            } 
        }
        //printf("*\n");
    }




    return 0;
}