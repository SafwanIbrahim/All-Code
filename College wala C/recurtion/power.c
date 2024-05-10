#include <stdio.h>

int po(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    return a*po(a,b-1);

}

int main()
{
    printf("%d\n",po(2,7));
}