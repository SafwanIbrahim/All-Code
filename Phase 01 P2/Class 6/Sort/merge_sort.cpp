#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e6+7;
int arr[N];

vector<int> merge(vector<int>&l, vector<int>&r) 
{
    vector<int>v;
    int p1 = 0, p2 = 0;
    for (int i = 1; i <= l.size()+r.size(); i++) {
        if (p1 == l.size()) {
            v.push_back(r[p2++]);
        }
        else if (p2 == r.size()) {
            v.push_back(l[p1++]);
        }
        else if (l[p1] <= r[p2]) {
            v.push_back(l[p1++]);
        }
        else {
            v.push_back(r[p2++]);
        }
    }
    return v;
}

vector<int> merge_sort(int l, int r) {
    if (l == r) {
        return {arr[l]};
    }
    int mid = (l+r)/2;
    vector<int>L = merge_sort(l,mid);
    vector<int>R = merge_sort(mid+1,r);
    return merge(L,R);
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int>v = merge_sort(0,n-1);
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    for (auto x : v) cout << x << " ";
    cout << endl;

    return 0;
} 