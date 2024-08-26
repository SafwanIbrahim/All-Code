#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int a;

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int team; cin >> team;
    while(!team) {
        multiset<int>check[team];
        for (int i = 0; i < team; i++) {
            int ele; cin >> ele;
            for (int j = 0; j < ele; j++) {
                int insrt; cin >> insrt;
                check[i].insert(insrt);
            }
        }
        map<int,queue<int>> mp;
        string s;
        while(true) {
            cin >> s;
            if (s == "STOP") break;
            if (s == "ENQUEUE") {
                int numb; cin >> numb;
                for (int i = 0; i < team; i++) {
                    if(check[i].find(numb) != check[i].end()) {
                        for (int j = 0; j < mp.size(); j++) {
                            
                        }
                    }
                }
            }
        }
    }
    return 0;
}