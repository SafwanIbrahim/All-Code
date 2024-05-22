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

    int ncr = (fac(n))/(fac(r)*fac(n-r));
    return ncr;

}

int main ()
{   

    int y =nCr(5,1)+nCr(5,2)+nCr(5,3)+nCr(5,4)+nCr(5,5)+1;  // pow(2,5)
    printf("%d", y);

}