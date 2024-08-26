#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    int n; cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());  // must sort array first

    vector<int>::iterator i = upper_bound(v.begin(),v.end(),4);
    vector<int>::iterator i2 = lower_bound(v.begin(),v.end(),4);

    cout << "occurance of 4 in vector is = " << i - i2 << endl;

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = v[i];
    }

    sort(arr,arr+n);

    int* p = lower_bound(arr,arr+n,4);
    cout << "index or 4 is : " << p-&arr[0] << endl;
    return 0;
} 