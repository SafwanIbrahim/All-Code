#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int N = 2e5+7;
int fact[N],arr[N];
int mod = 1e9+7;

int nCr(int n, int r)
{   
    int ncr = (fact[n])/(fact[r]%mod*(fact[n-r]%mod))%mod;;
    return ncr;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int f=1;
    fact[0] = 1;
    for (int x = 1; x <= N ; x++) {   
        f = (f%mod * x%mod)%mod;
        fact[x] = f; 
    }

    int t; cin >> t;
    while(t--) {
        int n,need; cin >> n >> need;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                one++;
            }
            else zero++;
        }

        cout << nCr(one,need)*((n-need)*(n-need)-1)-zero << endl;
        cout << nCr(one,need) << " " << (n-need)*(n-need) << " " << zero << endl;
    }
    
    return 0;
} 