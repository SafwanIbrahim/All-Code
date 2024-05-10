#include <stdio.h>


int main ()
{
    int a[] ={1,2,3,4,5};
    int ra[5];

    for (int x = 0; x < 5; x++) {
        ra[x]=a[4-x];
    }
    for (int x = 0; x < 5; x++) {
        printf("%d ",ra[x]);
    }

    return 0;
}