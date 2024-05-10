#include <stdio.h>
#include <limits.h>
int main ()
{   
    int arr[7]={7,1,5,4,3,1,6};
    int s; 


    for (int p = 0; p <= 5; p++)  // it will run 6 times maximum
    {
        int mn=INT_MAX;
        for (int i = p; i <= 6; i++)
        {
           if (arr[i]<mn) 
           {
                mn = arr[i];
                s=i;
           }
        }
        arr[s]=arr[p];
        arr[p]= mn;
    } 
    for (int i = 0 ; i <= 6 ;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}