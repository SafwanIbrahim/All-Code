#include <stdio.h>

void swap(int* a,int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;

}

int main ()
{
    int x = 10, y = 200;
    swap(&x,&y);
    printf("%d", x);

}