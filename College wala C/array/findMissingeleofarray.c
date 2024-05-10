#include <stdio.h>
#include <stdbool.h>



int main ()

{
    int a[]={1,2,3,4,5,6,7,8,10};

    int t=4;

    bool flag = false;

    for (int x = 0; x<= 8;x++) {
        if (a[x] == t) {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        printf("found");
    }
    else {
        printf("not found");
    }



    return 0;
}