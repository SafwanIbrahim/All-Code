#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int limit = 1e9;
    int loop = 9;
    int var = 0;
    int p = 0;
    for (int i = 1; i <= limit;) 
    {
        //cout << i << endl;
        int sum = 0;
        int number = i;
        var++;
        while(number > 0) {
            int digit = number % 10;
            sum += digit;
            number /= 10;
        }
        if (sum == n) {
            cout << i << endl;
            return;
        }
        if (var % loop == 0) {
            p++;
            i += pow(10,p);
            loop--;
            var = 0;
        }
        else i += pow(10,p);
    }
    cout << -1 << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 