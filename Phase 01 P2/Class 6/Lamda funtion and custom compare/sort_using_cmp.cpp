#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool cmp(int a,int b) {
    return a > b; // never use >= or <= ; in sort comparison use strict ordering
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+n,cmp);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
} 