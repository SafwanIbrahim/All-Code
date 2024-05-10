#include <stdio.h>
#include <string.h>


int main ()
{   
    char s[]="someting plus";  // size of string is 14 

    char* s2 = s;              // shallow copy 

    char news[14];             // for deep copy

    s[0]='n';                  // it will change s2 also 

    for (int i = 0; i <= 12; i++)
    {
        news[i]=s[i];
    }


    printf("%s\n",s2);
    printf("%s\n",s);
    printf("%s\n",news);

    return 0;
}