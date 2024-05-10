#include <stdio.h>

int mini(int a, int b)
{
    int minimum = a;
    if (a < b)
    {
        minimum = b;
    }
    return minimum;
}


int gcd(int a, int b)
{   
    int cd = 1;

    for (int i = mini(a,b); i >=2 ; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cd = i;
            break;
        }
    }
    return cd;
}


int main ()
{
    int x = 34, y = 17;

    printf("%d",gcd(x,y));
}