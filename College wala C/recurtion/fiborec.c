#include <stdio.h>

int fibb(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibb(n-1)+fibb(n-2);
}

int main()
{
    printf("%d\n",fibb(7));
}

