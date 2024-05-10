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
    int k=3;
    int n=7;
    int a[]={1,2,3,4,5,6,7};       //rotate k times;

    k=k%n;

    rev(a,0,n-1);
    rev(a,0,k-1);
    rev(a,k,n-1);


    for (int x = 0; x<=6 ;x++) {
        printf("%d ",a[x]);
    }

    return 0;
}