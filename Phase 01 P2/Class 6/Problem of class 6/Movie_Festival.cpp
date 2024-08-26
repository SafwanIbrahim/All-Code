#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    map<int,int>mp;

    for (int i = 1; i <= n; i++) {
        int start,end; cin >> start >> end;
        if (mp[end] < start) {
            mp[end] = start;
        }
    }

    int last_end = 0;
    int movies = 0;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        int start = (*it).second, end = (*it).first;
        if (start >= last_end) {
            last_end = end;
            movies++;
        }
    }
    cout << movies << endl;
    return 0;
} 