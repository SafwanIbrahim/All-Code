#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{    
    int n ; cin >> n;

    int first = 0;
    int second = 1;
    int next;
    int out;

    for (int i = 1; i <= n; i++) // 0 1 1 2 3
    {   
        out = first;
        next = first+second;
        first = second;
        second = next;

    }
    
    cout << out;

    return 0;
}