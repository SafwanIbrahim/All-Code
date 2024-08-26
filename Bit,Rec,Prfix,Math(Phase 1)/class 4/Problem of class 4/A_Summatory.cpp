#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e6+7;
int arr[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int md = 1e9+3;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int ans = ((1LL*i*(i+1))/2)%md;
        ans = 1LL * ans * ans % md;
        sum += ans;
        sum %= md;
        arr[i] = sum;
    }
    int t = 1; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
} 