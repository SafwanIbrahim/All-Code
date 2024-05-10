#include <stdio.h>
#include <string.h>


int main ()
{   
    char st[]="Hello Safwan Ibrahim";
    char st2[20];         // can't declare only without giving the size
    char st3[20];

    scanf("%s",st2);    // doesn't print string after space
    //gets(st3);          // will print all words
    scanf("%[^\n]s",st3);  

    printf("%s",st2);   
    printf("\n%s",st3);
    //puts("\nHi");           //automatically takes new line   
    return 0;
}