#include <stdio.h>
#include <string.h>

int main ()
{
    char s[101];

    scanf("%s",s);
    int c = 0;
    for (int i = 0; s[i]!='\0';i++)
    {
        c++;
    }
    int extra=0;
    int red = 0;
    for (int j = 0; j < c ; j++)
    {   
        for (int k = 0; k < c ; k++)
        {
            if (s[j]==s[k] && k!=j)
            {
                extra++;
            }
        }
    }
    printf("%d\n%d",c,extra);





}