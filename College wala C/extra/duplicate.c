#include <stdio.h>

int sum(int a)
{
    int sum =(a*(a+1))/2;
    return sum;
}

int main ()
{   
    int s=0;
    int a[]={1,2,3,4,5,6,7,8,9,9,10};

    for (int i = 0; i <= 10 ; i++)
    {
        s+=a[i];
    }
    printf("duplicate number is %d\n",(s-sum(10)));
    
    

    return 0;
}