#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int a,b,c; 
    while(true)
    {
    cin >> a >> b >> c;
    if (c == 0 && b == 0 && a == 0) break;
    if (c-b == b-a) cout << "AP " << c+b-a << endl;
    else if (c % b == 0 && b % a == 0 && c/b == b/a) cout <<"GP " << c * (b/a) << endl;
    }
}

int main()
{   
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

