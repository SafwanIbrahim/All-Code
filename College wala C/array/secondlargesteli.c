#include <stdio.h>
#include <limits.h>
int main ()
{   
    int a[] = {1,4,4,9};
    int mx = INT_MIN;
    int smx = INT_MIN;

    for (int x = 0; x < 4; x++) {
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