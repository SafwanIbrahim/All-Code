#include <stdio.h>

int main ()
{
    int a[]={1,2,3,4,5};
    int indx=0;
    int n;
    int flag = 0;

    printf("enter the number you are searching for : ");

    scanf("%d", &n);

    for (int i = 0; i < 5 ; i++)
    {
        if (a[i] == n)
        {
            flag=1;
            break;
        }
        indx++;
    }
    if (flag == 1)
    {
    printf("Found. index of this number is %d\n",indx);
    }
    else
    {
        printf("Not found");
    }

}