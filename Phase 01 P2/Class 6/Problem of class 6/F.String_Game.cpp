#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+7;
string s,p;
int arr[N];

bool ok(int l) {
    string temp = "";
    vector<bool>ase(s.size(),false);
    for (int i = l; i < s.size(); i++) {
        ase[arr[i]] = true; 
    }

    for (int i = 0; i < s.size(); i++) {
        if (ase[i]) {
            temp += s[i];
        }
    }

    if (temp.size() < p.size()) {
        return false;
    }

    int pointer = 0;
    for (int i = 0; i < temp.size(); i++) {
        if(temp[i] == p[pointer]) {
            pointer++;
        }
        if (pointer == p.size()) {
            return true;
        }
    }

    return false;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s >> p;

    for (int i = 0; i < s.size(); i++) {
        cin >> arr[i];
        arr[i]--;
    }

    int lo = 0, hi = s.size()-1,ans = 0;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        if (ok(mid)) {
            ans = mid;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }

    cout << ans << endl;

    return 0;
} 