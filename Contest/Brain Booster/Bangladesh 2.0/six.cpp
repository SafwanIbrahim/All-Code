#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n+2];
    arr[n+1] = -5;
    map<int,int>mp;

    cin >> arr[1];
    int l = 1;
    int r = 1;

    for (int i = 2; i <= n+1; i++) {
        if (i <= n) {
            cin >> arr[i];
        }
        if (arr[i] >= arr[i-1]) {
            r = i;
        }
        else if (arr[i] < arr[i-1]) {
            if (r > l) {
                mp[l] = r;
            }
            l = i;
        }
    }

    arr[0] = -5;
    arr[n+1] = INT_MAX;

    int q; cin >> q;
    while(q--) {
        int a; cin >> a;
        if (a == 2) {
            int l,r; cin >> l >> r;
            bool got = false;
            auto it = mp.upper_bound(l);
            if (it != mp.begin()) {
                it--;
                if (r <= (*it).second) got = true;
            }
            cout << (got ? "YES\n" : "NO\n");  
        }
        else {
            int leftt,rightt;
            int i,x; cin >> i >> x;
            if (x >= arr[i-1]) {
                leftt = i-1;
                auto it = mp.lower_bound(i);
                if (it != mp.begin()) {
                    it--;
                    if ((*it).second >= i-1) {
                        leftt = (*it).first;
                    }
                }
                rightt = i;
                if (x <= arr[i+1]) {
                    rightt = i+1;
                    auto it = mp.upper_bound(i);
                    if (it != mp.begin()) {
                        it--;
                        if ((*it).second >= i+1) {
                            rightt = (*it).second;
                        }
                    }
                }
                mp[leftt] = rightt;
            }
            else if (x < arr[i-1]) {
                //cout << "Yo";
                leftt = i;
                rightt = 0;
                auto it = mp.upper_bound(i);
                if (it != mp.begin()) {
                    it--;
                    if (x >= arr[i+1]) {
                        rightt = (*it).second;
                        //cout << "yo2";
                    }
                } 
                if (rightt != 0) {
                    mp[leftt] = rightt;
                    //cout << "yo3";
                }
                else {
                    auto it = mp.upper_bound(i);
                    if (it != mp.begin()) {
                        it--;
                        if ((*it).second == i or (*it).second == i+1) {
                            mp[(*it).first] = i-1;
                            //cout << "yo4";
                        }
                        if ((*it).second >= i+1) {
                            mp[i+1] = (*it).second;
                            //cout << "yo5";
                        }
                    }
                    //cout << "yo6";
                }
            }
        }
    }
    return 0;
}