#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x = 10;
    // int& a; this is a wrong way; we cannot declare refference;
    int& y = x; // y is the alternative of x; both have the same address. that means both are same

    cout << y << endl;
    
    return 0;
} 