#include<bits/stdc++.h>
using namespace std;

int32_t main() 
{
    vector<string> v = {"Hello", "World"};

    for (string s: v) {
        cout << s << ' ';
    }

    cout << endl;
    reverse(v.begin(), v.end());

    for (string s: v) {
        cout << s << ' ';
    }

    cout << endl;

    pair<int, vector<string>> p = {1, v};
    cout << p.second[0] << '\n';
    
    return 0;
} 