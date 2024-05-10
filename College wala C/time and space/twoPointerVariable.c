#include <stdio.h>

int main ()
{   

    int x = 11;
    int a[]={1,3,4,5,6,8,9,12};  // find two eliments such that sum of this will be x // array is sorted

    int i = 0, j = 7;

    while (i<j) 
    {
        if (a[i]+a[j]==x)
        {
            printf("%d and %d ",a[i],a[j]);
            break;
        }
        else if (a[i]+a[j]>x)
        {
            j--;
        }
        else if (a[i]+a[j]<x)
        {
            i++;
        }
    }









}