#include <stdio.h>
#include <string.h>

int main ()
{
    char* string ="nothing";  // actually lenth is 7+1
    char string2[8];
    char string3[122]="Nothing";
    char string4[]=" special";


    int x = strlen(string);

    strcpy(string2,string);
    strcat(string3,string4); // it will concatenate s3 and s4 in s3

    printf("%d\n",x);      // it will show 7
    printf("%s\n",string2);
    printf("%s\n",string3);


}
