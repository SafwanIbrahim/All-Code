#include <stdio.h>

int main ()
{
    char x='1',z = '9';
    int y = (int)x;
    int i = (int)z;
    int n = 65;
    char c1 = (char)n;

    printf("%d\n%d\n%c",y,i,c1);
    return 0;
}