#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+9;
int arr[N],brr[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];   
    }

    map<int,int>mp;
    for (int i = 1; i <= n; i++) {
        if (mp.find(k-arr[i]) != mp.end()) {
            cout << mp[k-arr[i]] << " " << i << endl;
            return 0;
        }
        else mp[arr[i]] = i;
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}