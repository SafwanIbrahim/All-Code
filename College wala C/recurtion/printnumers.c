#include <stdio.h>

void  decreasing(int n)
{   
    if (n == 0)
    {
        return;
    }
    printf("%d\n",n);
    decreasing(n-1);
    printf("%d\n",n);
    return;
}
// void  increasing(int x,int n)
// {   
//     if (x > n)
//     {
//         return ;
//     }
    
//     printf("%d\n",x);
//     return increasing(x+1,n);
// }
void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n-1);
    printf("%d\n",n);
    return;

}   

int main ()
{   
    decreasing(7);
    //increasing(1,7);
    //inc(7);
    return 0;
}
