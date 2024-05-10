#include <stdio.h>

int main()
{   
    int x,n;

    scanf("%d", &n);

    for (x = 1 ; x <= 10 ; x++) 
    {
        printf("%d x %d = %d\n",n,x,n*x);
    }

    return 0;

}

