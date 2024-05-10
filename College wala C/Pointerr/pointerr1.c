#include <stdio.h>

int main ()

{
    int b = 5;
    int v = 10;
    int* x = &b;  // & = address  and (int* = where address can be stored)
    int a = *x;   // * = value of this address
    int** z = &x; // (int ** = where the address of address can be stored)
    int* q = &v;
    *q = 1000;
    **z = 15;

    printf("%p\n", x);
    printf("%d\n", *x);
    printf("%d\n", a);
    printf("%d\n", v);
    printf("%d\n", b);
    printf("%p\n", &b);
    printf("%p\n", z);

}