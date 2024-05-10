#include <stdio.h>

int main ()
{   
    int a[]={1,2,3,4,6,7,8,9,10};

    int sumof10th=(10*(10+1))/2;  // sum of nth ele = (n*(n+1))/2 

    int sumofarr=0;

    for (int x = 0; x<= 8; x++) {
        sumofarr+=a[x];
    }
    printf("the missing ele is %d",sumof10th-sumofarr);
    return 0;
}