#include <stdio.h>
void rev(int arr[],int a,int b) 
{
    for(int x = a,y =b; x<y ; x++,y--) {
        int tmp =arr[x];
        arr[x] = arr[y];
        arr[y]= tmp;
    }
}

int main ()
{   
    int c = 0;
    int n=6;
    int a[6]={1,2,3,3,2,0};
    
    //Method 1: and check pelindrom;

    // for (int x = 0; x < 6/2; x++) {
    //     int tmp = a[x];
    //     a[x] = a[5-x];
    //     a[5-x] = tmp;
    //     if (a[x]==a[5-x]) {
    //         c+=1;
    //     }

    // }

    //Method 2:

    // for (int i=0,j=5; i<j ;i++,j--) {
    //     int tmp = a[i];
    //     a[i] = a[j];
    //     a[j] = tmp;
    // }

    rev(a,0,n-1);

    for (int x = 0; x < 6; x++) {
        printf("%d ",a[x]);
    }
    // if (c == 6/2) {
    //     printf("Yes");
    // }
    // else {
    //     printf("No %d",c);
    // }

    return 0;
}