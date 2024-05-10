#include <stdio.h>
#include <string.h>

int main ()
{
    char s[20];
    int size = 0;

    scanf("%[^\n]s",s);

    for (int i = 0; s[i]!='\0';i++)
    {
        size++;
    }
    printf("%d\n",size);
    printf("%s",s);
}