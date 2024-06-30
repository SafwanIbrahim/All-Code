#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main()
{       
    int n; cin >> n;
    for (int i = 1; i <= n ; i++)
    {
        cout << (1 << (int)floor(log2(i))) << " ";
    }
    return 0;
} 


