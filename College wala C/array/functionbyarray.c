#include <stdio.h>

void fun(int li[])                     // No need to declare array size
{   
    int temp;
    temp = li[0];
    li[0] = li[4];
    li[4] = temp;

}

int main ()
{   
    int a[] = {1,2,3,5,6} ;
    fun(a);
    printf("%d\n",a[0]);
    printf("%d\n",a[4]);
    return 0;

}