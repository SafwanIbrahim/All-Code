#include <stdio.h>

int fac(int n)
{   
    if (n == 1 || n == 0)  // base case.
    {
        return 1;
    }
    return n*fac(n-1);
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n+sum(n-1);
}

void  greet(int n)
{   
    if (n == 0)
    {
        return;
    }
    printf("Hi\n");
    greet(n-1);
    return;
}




int main ()

{
    printf("%d %d\n", fac(5),sum(2));
    greet(5);
   // outputtt(9);

}