#include <stdio.h>

int main ()
{   
    int b;
    printf("enter last eli of array : ");
    scanf("%d",&b);
    int a[] = {2,4,b};
    for (int x = 0 ; x < 3 ; x++) {
        printf("%d\n",a[x]);
    }
    int n;
    int li[n];

    printf("enter eliments number of 2nd array : ");
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++) {
        scanf("%d",&li[i]);
    }
    
    for (int y = n-1 ; y >= 0; y--) {
        printf("%d ",li[y]);
    }
    printf("\n");
    for (int y = 1 ; y <= n; y++) {
        printf("%d ",li[n-y]);
    }
    return 0;
}