#include <stdio.h>
#include <string.h>

int main ()
{   
    char s[20]="aeou";  // insert 'i' in index 2;

    int x = strlen(s);
    printf("%s\n",s);

    for (int i = x-1; i >=2; i--)
    {
        s[i+1] = s[i];
    }

    s[2] ='i';

    printf("%s\n",s);
    printf("%d",x);
    return 0;
}
