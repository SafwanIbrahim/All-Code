#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string,string>mp;

    string line;
    while(getline(cin,line)) {
        if (line.empty()) continue;
        if(find(line.begin(),line.end(),' ') != line.end()) {
            stringstream ssin(line); 
            string a,b;
            ssin >> a >> b;
            mp[b] = a;
        }
        else {
            //string s = line;
            if(mp.find(line) != mp.end()) cout << mp[line] << endl;
            else cout << "eh\n";
        }
    }
    return 0;
} 