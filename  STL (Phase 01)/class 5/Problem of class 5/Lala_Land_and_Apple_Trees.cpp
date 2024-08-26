#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    map<int,int>left,right;
    for (int i = 0; i < n; i++) {
        int x,a; cin >> x >> a;
        if (x < 0) {
            left[x] = a;
        }
        else {
            right[x] = a;
        }
    }
    bool go_left;
    if (left.size() > right.size()) {
        go_left = true;
    }
    else {
        go_left = false;
    }

    int sum = 0;
    while(true) {
        if(go_left) {
            if(left.empty()) {
                break;
            }
            else {
                auto it = left.rbegin();
                sum += (*it).second;
                go_left = false;
                left.erase((*it).first);
            }
        }
        else {
            if(right.empty()) {
                break;
            }
            else {
                auto it = right.begin();
                sum += (*it).second;
                go_left = true;
                right.erase((*it).first);
            }
        }
    }
    cout << sum << endl;
    return 0;
} 