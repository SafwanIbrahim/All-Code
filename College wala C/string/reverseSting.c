#include <stdio.h>
#include <string.h>

int main ()

{
    char s[40];
    int i = 0,size = 0;

    scanf("%[^\n]s",s);


    while (s[i]!='\0')
    {
        size++;
        i++;
    }
    for (int x = 0,y = size-1; x < y ; x++,y--)
    {
        char tmp = s[x];
        s[x] = s[y];
        s[y] = tmp;
    }
    printf("%s",s);

}