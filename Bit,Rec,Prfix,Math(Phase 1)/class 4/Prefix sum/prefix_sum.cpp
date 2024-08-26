#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;

int a[N];
long long prefix_sum[N];
int main() 
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
    
    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;
        l++; r++; // 1 based indexing
        long long sum = 0;
        // for (int i = l; i <= r; i++) {
        //   sum += a[i];
        // }
        sum = prefix_sum[r] - prefix_sum[l - 1];
        cout << sum << '\n';
    }
    return 0;
}