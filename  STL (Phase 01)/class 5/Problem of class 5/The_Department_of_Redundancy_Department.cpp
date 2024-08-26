#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<int,int,custom_hash>ump;
    vector<int>v;

    int n;
    while(cin >> n) {
        if (ump[n] == 0) v.push_back(n);
        ump[n]++;
    }
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " " << ump[*i] << endl;
    } 
    
    return 0;
} 