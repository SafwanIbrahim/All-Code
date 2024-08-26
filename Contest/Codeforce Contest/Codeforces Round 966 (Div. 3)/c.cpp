#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{   
    map<int,vector<int>>map_array;

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        map_array[arr[i]].push_back(i);
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        map<char,vector<int>>map_string;

        for (int i = 0; i < s.size(); i++) {
            map_string[s[i]].push_back(i);
        }

        bool same = true;
        if (s.size() != n) {
            same = false;
        }

        if(same) {
            for (auto [key1,value1] : map_array) {
                if (value1.size() > 1) {
                    for (int i = 0; i < value1.size()-1; i++) {
                        if (s[value1[i]] != s[value1[i+1]]) {
                            same = false;
                        }
                    }
                }
            }
        }

        if (same) {
            for (auto [key1,value1] : map_string) {
                if (value1.size() >  1) {
                    for (int i = 0; i < value1.size()-1; i++) {
                        if (arr[value1[i]] != arr[value1[i+1]]) {
                            same = false;
                        }
                    }
                }
            }
        }
        if (same) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 