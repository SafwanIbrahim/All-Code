#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,k ; cin >> n >> k;

    int binary_number = ~((1 << k) - 1);

    cout << (n & binary_number) << endl; 

    return 0;
}