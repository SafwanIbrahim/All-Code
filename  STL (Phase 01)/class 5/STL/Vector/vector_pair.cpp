#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<pair<int , char>> v; 
    v.push_back(make_pair(12,'s'));
    v.push_back(make_pair(13,'a'));
    
    for (pair<int, char> x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
    // or we can declare by using auto 

    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
    // or we can make this life 10 times easier 

    for (auto [a , b] : v) // it means if we declare an pair x; then auto [a,b] = x.first , x.second
    {
        cout << a << " " << b << endl;
    }

    return 0;
} 