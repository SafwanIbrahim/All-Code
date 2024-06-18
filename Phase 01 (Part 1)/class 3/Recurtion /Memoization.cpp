#include <bits/stdc++.h>
using namespace std;

int arr[100];
int fibo(int n)
{
    if (n == 0 || n == 1) return n;
    if (arr[n] != -1) return arr[n]; // if already stored then return this value; no need to calculate
    arr[n] = fibo(n-1) + fibo (n-2); // storing value of fibo(n);
    return arr[n];
}
int main()
{   
    for (int i = 0; i <= 100; i++)
    {
        arr[i] = -1;
    }
    cout << fibo(4) << endl;
    return 0;
}