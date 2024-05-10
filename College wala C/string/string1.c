#include <stdio.h>

int main ()
{

    char arr[]={'h','e','l','l','o'};
    char arr2[]="hello";            // size of arr2 is 5+1 beacuse it has hidden \0
 // char s[]="hello how are you\0";
    char s[]="hello how are you";   // it automatically adds \0 in ("").
    for (int x = 0; x <=4 ; x++) 
    {
        printf("%c",arr[x]);
    }
    int i = 0;
    printf("\n");
    // while (i < 5)
    // {
    //     printf("%c",arr2[i]);
    //     i++;
    // }
    i = 0;
    while (s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }



}