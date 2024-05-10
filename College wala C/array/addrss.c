#include <stdio.h>

int main ()
{
    int a[5];
    printf("%p %p",&a[0],&a[1]);
    printf("\n%p",a);           // adress start from the 0th index
    return 0;
}