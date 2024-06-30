#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int x,y,n; cin >> x >> y >> n;
    int almost_answer = ((n - y)/ x) * x;

    cout << almost_answer + y << endl;

}

int main()
{   
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 
