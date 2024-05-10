#include <stdio.h>
#include <string.h>

int main ()
{

    char s1[] = "Safwan Ibrahim"; // less efficient 
    char s2[20] = "Safwan Ibrahim"; // more efficient 
    char s3[14] = "Safwan Ibrahim"; // most efficient

    int i = 0;
    while(s1[i]!='\0')
    {
        printf("%c",s1[i]);
        i++;
    }
    printf("\n%s\n%s",s2,s3);
}