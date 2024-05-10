#include <stdio.h>

int main()

{
    int n,x = 1;

    scanf("%d", &n);

    for (int y = 1 ; y <= n ;y++) 
    {
        printf("%d\n",x);
        x+=2;
    }
}