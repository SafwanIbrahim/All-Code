#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   

        string s; cin >> s;
        map<char,vector<int>>map_string;

        for (int i = 0; i < s.size(); i++) {
            map_string[s[i]].push_back(i);
        }

    for (auto [key,value] : map_string) {
        for (int i = 0; i < value.size(); i++) {
            cout << value[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
} 