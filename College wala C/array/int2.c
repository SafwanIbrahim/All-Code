#include <stdio.h>

int main()
{   
    int a[] = {34,37,40,31,23};

    for (int x = 0; x < 5 ;x++) {
        if (a[x] < 35) {
            printf("%d ",x);
        }
    }
    printf("\n");
    return 0;
}