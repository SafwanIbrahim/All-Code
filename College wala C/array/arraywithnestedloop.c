#include <stdio.h>

int main ()
{   
    int c = 0, g = 12;
    int a[]={1,2,3,4,5,6,7,8};

    for (int x = 0; x < 8; x++) {
        for (int y = x+1; y < 8; y++) {
            if (a[x]+a[y] == g ) {
            c+=1;
            }
        }
    }
    printf("%d",c);

    return 0;
}