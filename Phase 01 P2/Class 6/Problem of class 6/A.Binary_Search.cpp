#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+4;
int n,q,arr[N];

void go() 
{
    int x; cin >> x;
    int lo = 1, hi = n;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        if (arr[mid] > x) hi = mid-1;
        else if (arr[mid] < x) lo = mid+1;
        else {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    while(q--) go();
    return 0;
} 