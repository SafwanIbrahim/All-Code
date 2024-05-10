#include <stdio.h>

int main ()

{
    int fac = 1,n;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++ )
    {
        fac*=i;
        printf("%d\n",fac);
    }



}