#include <stdio.h>
#include <string.h>

int main ()
{   
    char s[]="Hi How"; // we can change individual char in char s[] but not entire string
    char* s4="nomething";   // this is another way of initializing a string
    // this is immutabe but... // we can change entire string in char* s4
    // char* s4 means it is pointing address of 'n'

     

    s4="Now";
    char* s2= s;
    char* s3= &s[0];
    //*s = "Hi"; // error cz we can change only char using *s


    printf("%p\n",s);
    printf("%p\n",s3);
    printf("%s",s4);






    return 0;
}