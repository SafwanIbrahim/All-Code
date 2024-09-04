#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{  
    int n; cin >> n;
    char arr[n+5];

    int check = sqrt(n);
    if (check*check != n) {
        cout << "NO\n";
    }
    
    return 0;
} 