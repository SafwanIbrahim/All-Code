#include <stdio.h>

int main ()
{   
    
    int n;
    scanf("%d",&n);
    int a[n];
    
    for (int x = 0; x < n; x++) {
        scanf("%d",&a[x]);   
    }

    for (int x = 0 ; x < n ; x++) {
        if (x%2 == 1) {
            a[x]*=2;
        }

        else if (x%2 == 0) {
            a[x]+=10;
        }
    }

    for (int x = 0; x < n; x++) {
        printf("%d ",a[x]);   
    }

}
