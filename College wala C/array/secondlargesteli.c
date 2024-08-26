#include <stdio.h>
#include <limits.h>
int main ()
{   
    int a[] = {4,4};
    int mx = INT_MIN;
    int smx = INT_MIN;

    for (int x = 0; x < 2; x++) {
        if (a[x]>mx) {
            smx = mx;
            mx = a[x];
        }
        else if (a[x]!=mx && a[x]>smx) {
            smx=a[x];
        }
        
    }
    printf("%d",smx);

    return 0;
}