#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m,n; cin >> m >> n;
    map<string,int>mp;

    while(m--) {
        string s; cin >> s;
        int value ; cin >> value;
        mp[s] = value; 
    }

    while(n--) {
        string word;
        int sum = 0;
        while(cin >> word) {
            if (word == ".") break;
            if (mp.find(word)!= mp.end()) sum += mp[word];       
        }
        cout << sum << endl;
    }

    return 0;
} 