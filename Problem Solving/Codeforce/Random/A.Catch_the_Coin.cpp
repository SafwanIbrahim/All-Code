#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int n; cin >> n;
    int x,y;
    while(n--)
    {
        cin >> x >> y;
        if (y < -1) cout << "NO" << endl;
        else cout << "YES" << endl;        
    }
    return 0;

    
} 