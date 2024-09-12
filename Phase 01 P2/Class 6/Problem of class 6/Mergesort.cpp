#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<int>arr;

vector<int> merge(vector<int>&left, vector<int>&right) {
    int n = left.size()+right.size();
    vector<int>v;
    int p1 = 0, p2 = 0;
    for (int i = 1; i <= n; i++) {
        if (p1 == left.size()) {
            v.push_back(right[p2++]);
        }
        else if (p2 == right.size()) {
            v.push_back(left[p1++]);
        }
        else if (left[p1] < right[p2]) {
            v.push_back(left[p1++]);
        }
        else {
            v.push_back(right[p2++]);
        }
    }
    return v;
}

vector<int> merge_sort(int l,int r) {
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

    int n;
    while(cin >> n) {
        arr.push_back(n);
    }

    vector<int>v=merge_sort(0,arr.size()-1);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
} 