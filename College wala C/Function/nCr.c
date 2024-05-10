#include <stdio.h>

int fac(int n)
{
    int f=1;
    for (int x = 1; x <= n ; x++)
    {
        f*=x;
    }
    return f;
}

int nCr(int n, int r)
{   

    int ncr = (fac(n))/(r*fac(n-r));
    return ncr;

}

int main ()
{   

    int y =nCr(4,3);
    printf("%d", y);

}